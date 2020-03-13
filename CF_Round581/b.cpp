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
#define debug(x) if(on)cout << x << endl
#define on true
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;
#define MAXN 100100

int main (){
	int i, n, l, r;

	cin >> n >> l >> r;

	ll menor = 0;
	ll maior = 0;

	for(i = 0 ; i < l ; i++){
		menor += (1<<i);
	}

	for(int j = i ; j < n ; j++){
		menor += 1;
	}
	
	for(i = 0 ; i < r - 1 ; i++){
		maior += (1<<i);
	}
	

	for(int j = i ; j < n ; j++){
		maior += (1<<i);
	}	
	
	cout << menor << " " <<maior << endl;


}
