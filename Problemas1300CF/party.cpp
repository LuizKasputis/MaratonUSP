#include <bits/stdc++.h>
using namespace std;

vector <int> adj[2020];
vector <int> grupo[2020];

int dfs(int i , int no ){
	if(adj[i].size() == 0) return no;

	return dfs( adj[i][0] , no+1);
}


int main (){

	int n;

	cin >> n; 

	for(int i = 1 ; i <= n ; i++){
		int aux;

		cin >> aux;

		if(aux == -1) continue;
		
		adj[i].push_back(aux);

	}
	
	int maximo = 0;

	for(int i = 1 ; i <= n ; i++)
		
		maximo = max( maximo, dfs(i, 1) );
	
	
	cout << maximo << endl;

}
