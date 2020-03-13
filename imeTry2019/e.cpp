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
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;
#define MAXN 100100

int main (){
	fastio;
	
	int num, ok = 1;

	cin >> num;


	vector <string> ans;
	unordered_map <string, int> mapa;

	while(num--){

		string s;

		cin >> s;

		mapa[s]++;		
		
		if(mapa[s] > 1 && s.size() >= 4){
			ans.pb(s);
			ok = 0;
		}
		
	}

	if(ok == 1){
		cout << "SAFO\n";
		return  0;
	}
	cout << ans.size() << endl;;

	for(auto it : ans)
		cout << it << endl;;



}


