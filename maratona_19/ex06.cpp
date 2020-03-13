#include <bits/stdc++.h>
#define MOD 998244353
using namespace std;

int par, impar;
int seta[300010];
int paridade[300010];
bool ok;
vector <int> adj[300010];


void dfs(int n, int color){

	if( (color) % 2 == 0 ) par++;
	else impar++;
	
	paridade[n] = color;

	for(int i = 0 ; i < adj[n].size() ; i++){
		
		int no = adj[n][i];

		if(paridade[no] == 0){
			
			dfs(no, color - 1);

		}else{
			if(paridade[no] % 2 == paridade[n] % 2 )
				ok = false;
		}

	}	
	

}


int main (){
	int t , n , m;
	seta[0] = 1;
	for(int i = 1 ; i <= 300000 ; i++)
		seta[i]	= (seta[i-1]*2) % MOD ;
	
	scanf("%d", &t);

	while(t--){
		scanf("%d %d", &n , &m);
		
		impar = par = 0;
		
		for(int i = 0 ; i < m ; i++){
			int a, b;
			scanf("%d%d", &a, &b);
			adj[a].push_back(b);
			adj[b].push_back(a);
		}

		ok = true;

		int color = n +	2;
		int res = 1;
		
		for(int i = 1 ; i <= n ; i++){	
			if(paridade[i] != 0)
				continue;

			impar = par = 0;

			dfs(i, color);

			int num = ( seta[impar] + seta[par] ) % MOD;
		
			res = (res * num * 1LL) % MOD;
		}
		
		//Limpando
		//
		for(int i = 0 ; i < color + 10  ; i++)
			paridade[i] = 0;
		
		for(int i = 1 ; i <= n ; i++)
			adj[i].clear();


		if(ok == false){
			printf("0\n");
			continue;
		}
		

		printf("%d\n",  res % MOD);

	}



}

