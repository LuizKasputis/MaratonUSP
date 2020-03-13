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


int main (){ 
	int a, b, cartas, k1, k2;

	cin >> a >> b;
	cin >> k1 >> k2;
	cin >> cartas;

	cout << max(0, cartas - (a*(k1-1) + b*(k2-1))) << " ";

	if(k1 <= k2)
		cout << min(a, cartas/k1) + max( 0 ,  (cartas - min(a, cartas/k1)*k1)/k2  ) << endl ;
	else
		cout << min(b, cartas/k2) + max( 0 ,  (cartas - min(b, cartas/k2)*k2)/k1  ) << endl;


}	
