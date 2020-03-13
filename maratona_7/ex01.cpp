#include <bits/stdc++.h>
using namespace std;

int contPar, contImpar;
int ultPar, ultImpar;

int main (){
	int n, aux;
	cin >> n;

	for(int i=0 ;  i < n ; i++){
	       cin >> aux;
		if(aux % 2 == 0 ){
			contPar++;
			ultPar = i+1;
		}else{
			contImpar++;
			ultImpar = i+1;			
		}

	}

	if(contPar <= contImpar)
		printf("%d\n", ultPar);
	else
		printf("%d\n", ultImpar);

}
