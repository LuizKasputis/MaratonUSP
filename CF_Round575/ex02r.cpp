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
int n, k;
int v[200100];

int main (){
	fastio;
	int T;
	cin >> T;
	while(T--){
		cin >> n >> k;
	
		int cont = 0;

		for(int i = 0 ; i < n ; i++){
			cin >> v[i];
			if(v[i] % 2 != 0)
				cont++;	
		}
	
		if(cont < k || cont % 2 != k % 2){
			cout << "NO\n";
		}else{
			cout << "YES\n";
			k--;	
	
			FI(n){
				if(v[i] % 2 != 0 && k > 0){
					k--;
					cout << i + 1 <<  " ";
				}
			}		
			cout << n << endl;	
		}

		FI(n)
			v[i] = 0;
		
	}

}
