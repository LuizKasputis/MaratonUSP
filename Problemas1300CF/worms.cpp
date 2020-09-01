#include <bits/stdc++.h>
using namespace std;

int v[1010000], aux;

int main (){

	int n;

	cin >> n;

	int total = 1;
	
	for(int i = 1 ; i <= n ; i++){
		cin >> aux;

		for(int j = total ; j <= total + aux ; j++) 
			v[j] = i ;
		
		total += aux;
	}
	
	int m;
	cin >> m;


	for(int i = 0 ; i < m ; i++){
		cin >> aux;

		cout << v[aux] << endl;
	}	

}
