#include <bits/stdc++.h>
        using namespace std;
 
#define ll long long int 
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define fi first
#define mp make_pair
#define se second
#define FI(n) for(int i = 0; i < n; i++)
#define FOR(i,a,n) for (int i=(a);i<(n);++i)
#define t cout << "TESTE" << endl
#define debug(x) if(on)cout << x << endl
#define on true
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;
#define MAXN 100100

struct Trie{
	int cnt, word;
	map <char, Trie> m;

	Trie(){
		word = cnt = 0;
		m.clear();
	}	

	void add(string s, int i){
		
		if(s.length() == i){
			word = 1;
			return;
		}
		
		cnt++;
	
		if(!m.count(s[i]))
			m[s[i]] = Trie();


		m[s[i]].add(s, i+1);		
	}

	bool search(string s, int i){
	//	cout << s[i] << endl;	
		if(word == 1 && i != s.size())
			return true;

		if(i < s.size()){

			if(!m.count(s[i]))
				return false;
			else
				return m[s[i]].search(s, i + 1);
		}

		return false;
	}


};


int main (){
	fastio;
	int T;
	string s;
	cin >> T;
	
	FI(T){
		int num , ok;

		ok = 0;

		cin >> num;
		string ans[num];

		Trie b = Trie();

		for(int i = 0 ; i < num ; i++){

			cin >> s;
			ans[i] = s;
			
			b.add(s,0);
		}

		for(int i = 0 ; i < num ; i++)
			if(b.search(ans[i], 0))
				ok = 1;

		if(ok)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
		
	}

} 
