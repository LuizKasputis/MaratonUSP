#include <bits/stdc++.h>
using namespace std;

int v[101000];
int prim[101000];
int memo[101000];
int memoPrim[101000];
int primos[100100];


vector <int> listaPrim[101000];
vector <int> ind[101000];

void pd(int n){

	for(int i = 0 ; i < n ; i++){
	
		int num = v[i];

		for(int j = 0 ; j < listaPrim[num].size() ; j++){
			
			int primo = listaPrim[num][j];
			
			memoPrim[primo] ++;

			if(memo[i] < memoPrim[primo]){
				memo[i] = memoPrim[primo];
			}

		}
	
		for(int j = 0 ; j < listaPrim[num].size() ; j++){
			
			int primo = listaPrim[num][j];
			
			if(memo[i] > memoPrim[primo]){
				memoPrim[primo] = memo[i];
			}

		}	
				
	}

}

int main (){
	int n ;
	cin >> n;

	for(int i = 2 ; i < 100010 ; i++){
		if(primos[i] == 0)
		for(int j = i + i ; j < 100010 ; j +=i)
			primos[j] = 1;
	}

	int cont = 0;	
	for(int i = 2 ; i < 100010  ; i++)
		if(primos[i] == 0)
			prim[cont++] = i;

	for(int i = 0 ; i < n ; i++)
		cin >> v[i];
	

	for(int i = 0 ; i < n ; i++){
		int aux = v[i];
		int num = v[i];
		int j = 0;
	
		while( num > 1 ){
			int primo = prim[j];
			if( num % primo == 0){
				listaPrim[aux].push_back(primo);
				ind[primo].push_back(i);
				while(num % primo == 0)
					num = num / primo;		
			}
			j++;
		}
	
	}
	
	
	pd(n);
	int soma = 0;
	
	for(int i = 0 ; i < n; i++)
		soma = max(soma, memo[i]);
	if(soma == 0)
		printf("1\n");
	else
		printf("%d\n", soma);

}
