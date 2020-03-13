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


bool m[11005][11005];


bool dis(int x,int y, int a, int b ,int r){
	if( (x-a)*(x-a) + (y-b)*(y-b)  <= r*r )
		return true;
	return false;
}

int main (){
	int g, s, x, y, r;

	cin >> g;
	
	FI(g){
		cin >> x >> y;
		m[x][y] = true;		
	}


	cin >> s;
	for(int k = 0 ; k < s ; k++){
		
		cin >> x >> y >> r;
		
		for(int i = x - r; i <= x + r ; i++ ){
			for(int j = y - r; j <= y + r ; j++ ){
				if(i >= 0 && j >= 0 && dis(i,j,x,y,r)){
					if(m[i][j] == true)
						g--;
					m[i][j] = false;
				}	
			
			}
		}
	}
		
	cout << g << "\n";

}
