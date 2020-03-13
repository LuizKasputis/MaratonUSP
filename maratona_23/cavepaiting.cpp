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

int gcd(int j, int i){
	
	if(j % i == 0)
		return i;

	return gcd(i, j%i);

}


int main (){

	ll n, k;

	cin >> n >> k;

	if(k >50){
		cout << "NO\n";
		return 0;
	}
	
	n++;

	for(int i = 1 ; i <= k ; i ++){
	
		for(int j = i + 1 ; j <= k ; j++){
			
			int mmc = i*j/gcd(j,i);
			
			if(n % mmc == 0){
				cout << "NO\n";
				return 0;
			}
		

		}	


	}

	cout << "YES\n";
		

	

} 
