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

ll n, k;

int main (){
	fastio;

	cin >> n >> k;

	if(n <= k && n != 1){
		printf("No\n");
		return 0;
	}

	if( n % 2 == 0 && k >= 2){
		printf("No\n");
		return 0;
	}

 
	for(int i = 3 ; i <= k && i <= sqrt(n) ; i += 2){
		if(n % i == 0){
			printf("No\n");
			return 0;
		}
	}

	printf("Yes\n");


}
