#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

map<int,int> mapa;


int main (){
	
	fastio;

	for(int i = 0 ; i < 6 ; i++){
		int aux;
		cin >> aux;

		mapa[aux]++;

	}
	
	int ok = 0;
	
	for(auto it : mapa){
		if(it.second >= 4) ok = 1;
	
	}

	if(ok == 0){
		cout << "Alien" << endl;
		return 0;
	}

	for(auto it : mapa){
		if(it.second == 6 || it.second == 2){
			cout << "Elephant" << endl;
			return 0;
		}
	}

	cout << "Bear" << endl;


}
