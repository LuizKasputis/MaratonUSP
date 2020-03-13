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

vector <string> ans;

bool ok;
char s [800100];
int len;

struct Trie{
	int cnt, word;
	map <char, Trie> m;
	
	Trie(){
		word = cnt = 0;
		m.clear();
	}

	void add(int i){

		cnt ++;

		if(i == len ){
			if(word >= 1){
				ans.pb(s);
				ok = true;
			}
			word++;
			return;
		}

		if(!m.count(s[i]))
			m[s[i]] = Trie();

		m[s[i]].add(i+1);

	}
};

int main (){
	fastio;
	
	Trie T;

	int m;	

	cin >> m;


	FI(m){

		cin >> s;

		len = strlen(s);
	
		if(len >= 4)
			T.add(0);
	}

	

	if(ans.size() == 0){
		cout << "SAFO" << endl;
		return 0;
	}

	cout << ans.size() << endl;
	
	for(auto it : ans)
		cout << it << "\n";
} 
