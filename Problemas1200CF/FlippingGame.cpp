#include <bits/stdc++.h>
using namespace std;

int v[110];
int aux[110];
int n;

int conta(int l, int r){
	
	int total = 0;

	for(int i = 0 ; i < n ; i++){
		
		if(i >= l && i <= r)
			
			if(v[i] == 1)
				aux[i] = 0;	
			else
				aux[i] = 1;

		else
		
		aux[i] = v[i];

		if(aux[i] == 1)
			total++;

	}

	return total;
}


int main (){

	cin >> n;


	for(int i = 0 ; i < n ; i++)
		cin >> v[i];
	
	int total = 0;

	for(int i = 0 ; i < n ; i++){
		
		for(int j = i ; j < n ; j++){

			total = max(total,conta(i,j));

		}		
	}


	for(int i = n-1 ; i >= 0 ; i--){
		
		for(int j = i-1 ; j >= 0 ; j--){
				
			total = max(total,conta(j,i));
	
		} 

	}

	cout << total << endl;

}
