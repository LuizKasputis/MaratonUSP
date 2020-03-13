#include <bits/stdc++.h>
using namespace std;

int cores[20010];
int color[20010];
vector <int> adj[20010];
int i;

void dfs(int n, int cor){

	if( n < i )
		return;
	
	color[n] = cor;

	for(int j = 0 ; j < adj[n].size() ; j++){
		dfs(adj[n][j], cor);
	}
}

int main (){

	int n ;
	scanf("%d", &n);
	

	for(int i = 2 ; i <= n ; i++){
		int aux;
		scanf("%d", &aux);
		adj[aux].push_back(i);
	}

	int cor;
	int cont = 0;


	for(i = 1 ; i <= n ; i++)
		scanf("%d", &cores[i]);
	
	for(i = 1 ; i <= n ; i++){
	
		if(color[i] != cores[i]){
			dfs(i, cores[i]);
			cont++;
		}
	
	}

	printf("%d\n", cont);

	
}
