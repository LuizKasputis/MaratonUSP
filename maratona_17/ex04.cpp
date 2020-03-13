#include <bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
#define ll long long int
#define MOD 1000000007

int cont[100010];
int visitados[100010];
int n;
vector <pp> adj[100010];

ll aux = 0;

ll fastXP(ll a, int k) {
    
	if(k == 0) return 1;
    
   	 ll p = fastXP(a, k/2);
    
  	  p = (p*p) % MOD;
    
 	  return (k % 2 ? (a*p) % MOD : p);
}

void dfs(int n){
	
	if(visitados[n] == 1)
		return;
	
	visitados[n] = 1;
	
	aux++;
	
	for(int i = 0 ; i < adj[n].size() ; i++){

		int cor = adj[n][i].second ;
		int no = adj[n][i].first ;

		if(cor == 0)
			dfs(no);

	}	
}


int main (){
	int k;

	scanf("%d%d", &n, &k);

	for(int i = 0 ; i < n - 1 ; i++){
		int a,b,c;
		scanf("%d%d%d",&a, &b, &c);
		if(c == 0){
			cont[a] = cont[b] = 1;
		}
		adj[a].push_back( make_pair(b,c) );
		adj[b].push_back( make_pair(a,c) );
	}
	
	ll conta = 0;
	
	for(int i = 1 ; i <= n ; i++)
		if(cont[i] == 0)
			conta++;


	for(int i = 1 ; i <= n ; i++){
		aux = 0;
		if(cont[i] == 1 && visitados[i] == 0){
			dfs(i);
			conta = ( conta % MOD + fastXP(aux, k) % MOD ) % MOD; 
		}
	}

	ll total = ( fastXP(n, k) % MOD - conta ) % MOD ;
	if( total < 0 )
		total += MOD;
	printf("%lld\n", total);

}
