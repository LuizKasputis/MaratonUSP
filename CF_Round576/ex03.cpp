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

int n, k, v[400100];

bool check(ll x){
	
	ll cont = 0;

	for(int i = n/2 ; i < n ; i++){
		
		if(x - v[i] > 0 ) cont += x - v[i];
		if(cont > k ) return true;
		

	}
	
	if(cont <= k) return false;
	else return true;

}

int main (){
	fastio;

	cin >> n >> k;

	FI(n)
		cin >> v[i];

	sort(v, v+n);

	ll l = 1, r = 1000000100000000000;
	while(l != r){
	
		ll mid = (l+r+1) / 2;

		if(check(mid)){
			r = mid - 1;		
		}else{
			l = mid;
		}


	}
	
	cout << l << endl;

} 
