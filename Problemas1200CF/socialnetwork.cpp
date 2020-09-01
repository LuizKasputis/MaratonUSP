#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

queue <int> fila;
stack <int> pilha;
map <int,int> mapa;

int main (){

	fastio;
	int n, k;

	cin >> n >> k;


	for(int i = 0 ; i < n ; i++){
	
		int aux;
		cin >> aux;

		if(mapa[aux] == 1)
				continue;
		
		if(fila.size() == k){
			mapa[fila.front()] = 0;
			fila.pop();
		}
		fila.push(aux);
		mapa[aux] = 1;

	}

	while(!fila.empty()){
		pilha.push(fila.front());
		fila.pop();	
	}

	cout << pilha.size() << endl;
	while(!pilha.empty()){
		cout << pilha.top() << " ";
		pilha.pop();
	}
	
	cout << endl;
}
