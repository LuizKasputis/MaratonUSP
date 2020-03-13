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
#define MAXN 1000100
#define MOD 1000000007

int crivo[MAXN];
vector <int> primos;


ll eleva(ll a, ll n){

	ll ans = 1;

	while(n){
		if(n&1) ans = ans*a %MOD;
		a = a*a % MOD;
		n >>= 1;
	}
	
	return ans % MOD;
}

void raiz(ll x){

	if(x%2 == 0){

		primos.pb(2);

		while(x%2 == 0)
			x = x/2;

	}


	for(int j = 3 ; j*j <= x ; j ++){
		if(x % j == 0){
//			cout << "olar";
			primos.pb(j);
			while(x%j == 0)
				x = x/j;

		}
	
	}

	if(x > 2)
		primos.pb(x);

}


int main (){
	ll x, y;
	cin >> x >> y;

	raiz(x);

	ll resu = 1;

	for(auto it : primos ){

//		cout << it << endl;

		ll aux = y;
		ll cn = 0;
		
		while(aux){
			aux /= it;
			cn += aux;
		}
		
		resu = resu*eleva(it,cn)%MOD;
		
	}

	cout << resu << endl;

}
