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
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;

int m[1010][1010], c, l, j;

int main (){

	cin >> l >> c;

	for(int i = 0 ; i < l ; i++){

		int aux;

		cin >> aux;

		for(j = 0 ; j < aux ; j++)
			m[i][j] += 1;
	
		m[i][j] += 1;

	}

	for(int i = 0 ; i < c ; i++){

		int aux;

		cin >> aux;

		for(j = 0 ; j < aux ; j++)
			m[j][i] += 1;
	
		m[j][i] += 1;

	}

	ll cont = 0;

	for(int i = 0 ; i < l ; i++){
		for(int j = 0 ; j < c ; j++)
			if(m[i][j] == 0)
				cont ++ ;
	}

	ll numero;

	if(cont == 0)
		numero = 0;
	else
		numero = 1;	


	for(int i = 0 ; i < cont ; i++)
		numero = (numero*1ll*2)%1000000007 ;
	
	cout << numero << endl;

} 
