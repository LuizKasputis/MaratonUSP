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


int a[200100];

int main (){

	int T, n , k;

	cin >> T;

	FI(T){

		cin >> n >> k;

		for(int j = 0 ; j < n ; j++)
			cin >> a[j];


		pii ans;
		ans.first = INF;
		ans.second = -1;
		
		for(int j = 0 ; j < n-k ; j++){
			int dis = a[j + k] - a[j];	
			ans = min(ans, mp( dis, a[j] + dis/2 ) ); 
		}

		cout << ans.second << endl;

		memset(a, 0, sizeof(n+1));

	}


}
