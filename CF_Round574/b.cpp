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

int main (){

	int n , k ;

	cin >> n >> k;
	int l = -1;
	int r = n + 1;
	int mid;

	while(l < r){
		mid = (l+r)/2;
		if((mid+1)*1LL*mid/2 - (n - mid) < k ){
			l = mid + 1;
		}else if( (mid+1)*1LL*mid/2 - (n - mid) > k ){
			r = mid;
		}else{
			break;
		}

	}

	cout << (n - mid) << endl;


}
