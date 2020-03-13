#include <bits/stdc++.h>
using namespace std;

int visitados[300010];
int maior;
vector <int> adj[300010];
string s;
int memo[300010][35];

void dfs(int n){	
	
	if(visitados[n] == 1){
		printf("-1\n");
		exit(0);
	}
	// VAI TOMAR NO CU 
	if(visitados[n] == 2)
		return;

	visitados[n] = 1;

	for(int i = 0 ; i < adj[n].size() ; i++){
		
		int no = adj[n][i];
		dfs(no);

		for(int j = 0 ; j < 30 ; j++){
			memo[n][j] = max(memo[n][j], memo[no][j]);	
			maior = max(memo[n][j] , maior);
		}
	}
	
	int letra = s[n] - 'a';

	memo[n][letra]++;
	maior = max(memo[n][letra], maior);

	visitados[n] = 2;
	return ;
}


int main (){
	int tam , are;

	cin >> tam >> are;
	cin >> s;


	for(int i = 0 ; i < are ; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		adj[a-1].push_back(b-1);
	}


	for(int i = 0 ; i < tam ; i++)
		if(visitados[i] == 0)
			dfs(i);
	

	printf("%d\n", maior);

}
