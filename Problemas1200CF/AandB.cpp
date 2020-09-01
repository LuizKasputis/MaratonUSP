#include <bits/stdc++.h>
using namespace std;

map <int,int> check;
map <int,int> auxiliar;


int main(){
	int n;
	cin >> n;

	for(int i = 0 ; i < n ; i++){
		int aux;
		cin >> aux;

		check[aux]++;
		auxiliar[aux]++;
	
	}
	
	for(int i = 0 ; i < n-1 ; i++){
		int aux;
		cin >> aux;
		check[aux]++;

	}

	for(int i = 0 ; i < n-2 ; i++){
		int aux;
		cin >> aux;
		check[aux]++;

	}

	int a,b;


	for(auto it : check){
	
		if( 3*auxiliar[it.first] - it.second == 3){
			a = it.first;
			b = it.first;
			break;
		}
 		
	
		if( 3*auxiliar[it.first] - it.second == 2)
			a = it.first;
	
		if( 3*auxiliar[it.first] - it.second == 1)
			b = it.first;
		
	}


	cout << a << endl << b << endl;

}
