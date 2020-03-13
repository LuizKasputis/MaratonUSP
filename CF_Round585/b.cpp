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
#define MAXN 700100

int dp[MAXN][2];
int a[MAXN];

int main (){

	int n;

	cin >> n;

	FI(n)
		cin >> a[i];
	
	if(a[n-1] >= 0)
		dp[n-1][0] = 1;
	else
		dp[n-1][1] = 1;

	for(int i = n-2 ; i >= 0 ; i--){
	
		if(a[i] >= 0){
			dp[i][0] += dp[i+1][0] + 1;
			dp[i][1] += dp[i+1][1];
		}else{
			dp[i][0] += dp[i+1][1];
			dp[i][1] += dp[i+1][0] + 1;
		}	
	
	}

	ll neg = 0;
	ll pos = 0;

	FI(n){
		neg += dp[i][1];
		pos += dp[i][0];	
	}

	cout << neg << " " << pos << endl;
} 
