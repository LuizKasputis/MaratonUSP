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


int n;
ll memo[100010][2];
int v1[100010], v2[100010];

int v(int i, int id){
	if(id == 0 )
		return v1[i];
	else
		return v2[i];
}

ll pd(int i, int id){

	if(i > n)
		return 0;
	
	if(memo[i][id] == -1){
		int num = v(i, id);
		memo[i][id] = max(pd(i+1, id%2), pd(i+1, (id+1)%2) + num);
	}
	
	return memo[i][id];

}


int main (){
	fastio;

	cin >> n;

	FI(n){
		cin >> v1[i];
		memo[i][0] = memo[i][1] = -1;	
	}

	FI(n)
		cin >> v2[i];
	
	cout << max(pd(0,0) , pd(0,1) );

}
