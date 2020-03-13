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

int v[MAXN];

int main (){
	int n;
	cin >> n;

	for(int i = 2 ; i < 3001; i++){
		if(v[i] == 0)
		for(int j = i ; j < 3001; j+=i){
			v[j]++;
		}

	}

	int total = 0;
	for(int i = 2 ; i <= n ; i++)
		if(v[i] == 2)
			total++;
	cout << total << endl;

}
