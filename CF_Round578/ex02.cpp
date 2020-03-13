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
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;

vector <int> colu;

int main (){
	fastio;
	int T;
	int col, k;
	ll ini;

	cin >> T;

	while(T--){
		cin >> col >> ini >> k;

		for(int i = 0 ; i < col ; i++){
			int aux;
			cin >> aux;
			colu.pb(aux);
		}	

		bool ok = true;

		for(int i = 1 ; i < col ; i++){
			ini += colu[i-1] - max(0, colu[i] - k);

			if(ini < 0 ){
				ok = false;
				cout << "NO\n";
				break;
			}
			

		}
		if(ok)
			cout << "YES\n";
		colu.clear();
	}
}
