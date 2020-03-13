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

bool m[1100][1100];

int main (){
	int n , d;

	cin >> n >> d;

	int q;

	cin >> q;
	
	int x,y;
	FI(q){
		cin >> x >> y;
		

		if( x - y - d <= 0 && x + y - d >= 0 && x + y -2*n + d <= 0 && x -y +d >= 0){
			cout << "YES\n" ;
		}else{
			cout << "NO\n" ;
		}
			
		
	
	}


}
