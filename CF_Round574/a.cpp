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

int n, k;
int v[1010], a[1010];

int main (){
	cin >> n >> k;

	FI(n){
		cin >> v[i];
		a[v[i]]++;
	}

	int par = 0 , impar = 0;


	for(int i = 1 ; i <= k ; i++)
		while(a[i] >= 2 ){
			par++;
			a[i] -= 2;
		}
	if(n%2 != 0)
		n++;
	
	 n = n>>1 ;

	if(par >= n)
		cout << n*2 << endl;
	else
		cout << par*2 + (n-par) << endl;


}
