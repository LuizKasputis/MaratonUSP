#include <bits/stdc++.h>
using namespace std;

int v[120], p[120], maximo;

int main (){

	int a;
		
	cin >> a;

	for(int i = 0 ; i < a ; i++){
		
		int aux;
		cin >> aux;

		maximo = max(maximo,aux);

		v[aux]++;

	}

	int b;

	cin >> b;

	for(int i = 0 ; i < b ; i++){
		
		int aux;
		cin >> aux;
	
		p[aux]++;

	}

	int total  = 0;

	for(int i = 0 ; i <= maximo ; i++){

		if(v[i] == 0) continue;

		for(int j = i - 1 ; j <= i + 1 ; j++){

			if(j < 0 ) continue;
		
			if(v[i] <= 0)
				break;

			if(p[j] <= 0) continue;

			if(v[i] >= p[j]){	

				total += p[j];
				v[i] -= p[j];				
				p[j] = 0;

			}else{

				total += v[i];
				p[j] -= v[i];				
				v[i] = 0;

			}
		
		}


	}

	cout << total << endl;


}
