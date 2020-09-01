#include <bits/stdc++.h>
using namespace std;

set <int> lista;

int main (){
	
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		for(int i = 0 ; i < n ; i++){
			int aux;
			cin >> aux;
			lista.insert(aux);
		}
		
		cout << lista.size()  << endl;

		lista.clear();

	}

}
