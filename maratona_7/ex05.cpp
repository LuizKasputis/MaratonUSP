#include <bits/stdc++.h>
using namespace std;

int cont ;

void modular(int aux, int k, int num){
	for(int i = 1; i <= aux ; i++){
		if(num%i == 0){
			if(i > k)
				cont++;
			if(num/i > k && num/i != i)
				cont++;

		}
	}
}

int main (){
	int n, k;
	cin >> n >> k;

	if(n != k){
		modular(sqrt(n-k), k, n-k);
		printf("%d\n",cont);
	}else{
		printf("infinity\n");
	}
}
