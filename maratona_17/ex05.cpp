#include <bits/stdc++.h>
using namespace std;
#define pp pair <int, int>

queue pp q;

vector <int> adj;

 


int main (){
	int n;
	cin >> n;
	
	Endereco 

	for(int i = 0 ; i < n - 1 ; i++){
		int a, b;
		scanf("%d%d", &a, &b);
		queue.push(make_pair(a,b));
	}
	
	pp inicio = q.top();
	q.pop();

	adj.push_back( inicio.second );
	adj.push_back( inicio.first );
	
	vector <int> iterator dir;
	vector <int> iterator esq

	while(!q.empty()){	
		pp valor = q.top();
		q.pop();
		
		for(i = 0 ; i < adj.size() ; i++){
			
			if( dir != adj.end() ){
				adj.insert(dir,);
				continue;
			}
		
			esq = adj.find(adj.begin(), adj.end(), valor.first);
		
			if( esq != adj.end() ){
				
				continue;
			}
		}

		q.push(valor);
	}	


}
