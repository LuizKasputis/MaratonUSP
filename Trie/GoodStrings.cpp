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
#define debug(x) if(on)cout << x << endl
#define on true
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;
#define MAXN 100100
 
int bad;
int aux[26];
string aux1;

struct Trie{
	int cnt, word;
	map <char, Trie> m;

	Trie(){
		cnt = word = 0;
		m.clear();
	}	

	void add(string s, int i){
		cnt++;	

		if(i == s.size()){			
			return;
		}
	
		if(!m.count(s[i]))
			m[s[i]] = Trie();

		m[s[i]].add(s , i+1);
	}
	
	ll dfs(int conta){
		ll ans = 0;

		if(conta <= bad)
			ans++;		

		for(int i = 0 ; i < 26 ; i++)
{
			if(!m.count('a'+i))
				continue;
	
			int nos = conta;
			
			if(aux[i] == 0)
				nos++;

			if(nos > bad) continue;

			ans += m['a'+i].dfs(nos);
		}

		return ans;
	}

};


int main (){
	fastio;

	string s;

	cin >> s;
	cin >> aux1;

	FI(27)
		aux[i] = aux1[i] - '0';

	cin >> bad;

	Trie t = Trie();

	char sub[1505];
	
	for(int i = 0 ; i < s.size() ; i++){
		string sub;

		for(int j = i ; j < s.size() ; j++)
			sub.pb(s[j]);

//		cout << sub << endl;
		t.add(sub, 0);
	}

	cout << t.dfs(0) - 1<< "\n";


}
