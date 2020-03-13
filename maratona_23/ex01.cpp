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
#define tsludkfh cout << "TESTE" << endl
#define debug(x) if(on)cout << x << endl
#define on true
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;

int a[120], n;


bool verifica(int j, int cont){
	
	if(j != n - 1)
		return false;


}

int main (){

	cin >> n;

	if(n == 1){
		cout << "0\n";
		return 0;
	}

	FI(n)
		cin >> a[i];
	


	int aux = -3, cont = 0, maior = 0;
	bool ok = false;

	for(int i = 1 ; i < n ; i++){
	
		if(a[i-1] + 1 == a[i] ){
			if (a[i-1] == 1)
				ok = true;
			cont++;	

		}else{
			if((a[n-1] == 1000 && a[n-1] == a[n-2] + 1) || ok ){
				ok = false;
				maior = max(maior, cont);
			}else{
				maior = max(maior, cont - 1 );
			}

			cont = 0; 
		}
	
	

	}
	
	if( (a[n-1] == 1000 && a[n-1] == a[n-2] + 1) || ok){
		maior = max(maior, cont);
		cont = 0;
	}else{
		maior = max(maior, cont - 1 );
	}
	
	
	cout << maior << endl;


}
