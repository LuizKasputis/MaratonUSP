#include <bits/stdc++.h>
using namespace std;

int m[55][55];
int mark[55];
int res[55];

void zeramark(){	
	for(int i = 0 ; i < 55 ; i++)
		mark[i] = 0;

}


int main (){
	int n;
	cin >> n;

	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < n; j++)
			cin >> m[i][j]; 
	
	for(int i = 0 ; i < n ; i++){

		for(int j = 0; j < n ; j++)
			if(m[i][j] != 0)
				mark[m[i][j]]++;
			
		
		for(int j = 0; j < n ; j++)
			if(m[j][i] != 0)
				mark[m[j][i]]++;
			

		int cont = 2;
		int marca = 0;
		
		for(int j = 0 ; j < 55 ; j++){
			if(cont < mark[j]){
				cont = mark[j];
				marca = j;	
			}
		}
		
		if(marca != 0)
			res[i+1] = marca;
		zeramark();

	}
	
	int maior = n - 1;

	for(int i = 1 ; i <= n; i++)
		if(res[i] == 0){
			printf("%d ", maior);
			maior++;
		}else{
			printf("%d ", res[i]);
		}
	
	printf("\n");
}
