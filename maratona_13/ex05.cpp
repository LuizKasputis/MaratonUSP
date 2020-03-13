#include <bits/stdc++.h>

using namespace std;

vector<int> adj[100010];
int visitados[100010];
int vis;
int ok = 0;

void dfs(int n, int ant){
	if(visitados[n] == 1){
		ok = 1;
		return;
	}

	visitados[n] = 1;

	for(int i = 0 ; i < adj[n].size() ; i++)
		if(adj[n][i] != ant)
			dfs(adj[n][i], n);

}

int main (){
	int a, b;
	
	scanf("%d %d", &a, &b);

	for(int i = 0 ; i < b ; i++){
		int c,d;
		scanf("%d %d", &c, &d);
		adj[c].push_back(d);
		adj[d].push_back(c);
	}

	int cont = 0;
	
	for(int i = 1 ; i <= a ; i++){
		
		if(visitados[i] != 1){
			dfs(i, 0);
			if(ok == 0)
				cont++;
		}

		ok = 0;
	}

	cout << cont << "\n";

}
