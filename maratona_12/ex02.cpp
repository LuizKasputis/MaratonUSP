#include <bits/stdc++.h>
using namespace std;

vector <int> adj[1010];
vector <int> resp;
int vis[1010];

void dfs(int i){
	
	if(vis[i] == 1){
		resp.push_back(i);
		return;
	}
	
	vis[i] = 1;

	for(int j = 0 ; j < adj[i].size() ; j++)
		dfs(adj[i][j]);
	
}


int main (){
	int n;
	cin >> n;

	for(int i = 1 ; i <= n ; i++){
		int aux;
		cin >> aux;
		adj[i].push_back(aux);
	}

	for(int i = 1 ; i <= n ; i++){
	
		dfs(i);

		for(int i = 1 ; i <= n ; i++)
			vis[i] = 0;
	}

	for(auto it : resp)
		printf("%d ", it);

	printf("\n");

}

