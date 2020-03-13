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

int v[100100], n , k;

int main (){
	fastio;

	cin >> n >> k;

	FI(n)
		cin >> v[i];

	int mark = n/2;
	int aux = k;

	sort(v, v+n);

	for(int i = n/2 ; i < n ; i++){

		if(v[i] != v[i+1] && i+1 < n){

			aux -= (i+1 - (n/2))*(v[i+1] - v[mark]);
	
			if(aux < 0){
				cout << v[mark];
				return 0;
			}

			mark = i+1;

		}
	}	

	cout << v[mark] + (n/2)/k << endl;


}
