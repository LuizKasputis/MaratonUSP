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

const int ponto = 1e5;

int main (){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int maX, maY, miX, miY;
		maX = maY = ponto;
		miX = miY = -ponto;
		FI(n){
			int x, y, x1, x2, y1, y2;

			cin >> x >> y >> x2 >> y1 >> x1 >> y2;
			
			if(!x1)
				maX = min(maX, x);
			if(!y1)
				maY = min(maY, y);
			if(!x2)
				miX = max(miX, x);
			if(!y2)
				miY = max(miY, y);

		}	

		if(maX >= miX && maY >= miY){
			cout << 1 << " ";
			cout << maX <<" "<< maY<<endl;
		}else{
			cout << 0 << endl;
		}
	}

}	
