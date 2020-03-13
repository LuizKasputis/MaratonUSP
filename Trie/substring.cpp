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

int aux[1010], j;
int novas;

struct Trie{
	int cnt, word;
	map<int,Trie> m;

	Trie(){
		cnt = word = 0;
		m.clear();
	}

	void add(int i){
		cnt++;

		if(i == j ){
			word = 1;
			return;
		}

		if(!m.count(aux[i])){
			novas++;
			m[aux[i]] = Trie();
		}
		m[aux[i]].add(i+1);
	}
};

int main (){
	int T;

	cin >> T;

	while(T--){

		Trie t = Trie();
		string s;
		cin >> s;

		for(int i = 0 ; i < s.size() ; i++){

			for(j = i ; j < s.size() ; j++)
				aux[j-i] = s[j] - 'A';
			j-=i;	
			t.add(0);
		}
		cout << novas << endl;
		novas = 0;
	}

}
