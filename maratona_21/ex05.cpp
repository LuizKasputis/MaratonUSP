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

int v[100005];
int aux, ultimo, n;

ll arestas , vertices;

int main (){
	fastio;
	
	cin >> n;

	FI(n){
		cin >> aux;

		vertices += aux * 1LL * ( n - aux + 1);

		if(i >= 1){
			if( aux <= ultimo){
				arestas += aux* 1LL*(n - ultimo + 1);
			}else{
				arestas += ultimo*1LL*(n - aux + 1);
			}

		}

		ultimo = aux ;
	
	
	}	
	/*Relaçao de um grafo sem ciclos, o número de componentes é dado pelo número de  = (vertices - arestas) */

	cout <<  vertices - arestas  << "\n";
}
