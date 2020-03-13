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

string s;
int res[200100], ans;

int main (){
	
	int T;
	string aux;
	string sub1 = "RGB";
	string sub2 = "GBR";
	string sub3 = "BRG";

	cin >> T;

	while(T--){
		int n , k;

		cin >> n >> k;
		cin >> s;
		
		ans = INF;

		for(int i = 0 ; i < 3 ; i++){

			if(i == 0)
				aux = sub1;		
			if(i == 1)
				aux = sub2;
			if(i == 2)
				aux = sub3;

			int atual = 0;
			for(int j = 0 ; j < n ; j++){
				res[j] = s[j] != aux[(j+1)%3];
		
				atual += res[j];

				if(j >= k) atual -= res[j-k];
				if(j >= k - 1) ans = min(ans, atual);
			
			}
		}

		cout << ans << endl;

	}


}
