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


int main (){
	int n;
	cin >> n;
	ll soma = 0;
	int impar = 1000000001;
	int cont = 0;

	int aux;

	FI(n){
		cin >> aux;
		if(aux % 2 != 0){
			cont++;
			impar = min(impar, aux);	
		}

		soma += aux;

	}
	
	if(cont % 2 != 0)
		soma -= impar;

	cout << soma << "\n";



}
