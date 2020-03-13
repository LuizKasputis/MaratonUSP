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

int v[100100], n, a[100100];


int main (){
	fastio;


	cin >> n;

	ll sum = 0;

	FI(n){
		cin >> v[i];
		sum += v[i];
	}

	sort(v, v+n);
	
	if(sum%2 != 0 || v[n-1] > sum - v[n-1])
		cout << "NO" ;
	else
		cout << "YES";

	



}

