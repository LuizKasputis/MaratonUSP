#include <bits/stdc++.h>
using namespace std;

int v[200010];

int main (){
	int n;
	scanf("%d", &n);

	for(int i = 1 ; i <= n ; i++)
		scanf("%d", &v[i]);
	
	int aux =  0;
	long long int cont = 0;
	
	for(int i = 1 ; i <= n ; i++){
		cont += abs(aux - v[i]);
		aux = v[i];
	}

	printf("%lld\n", cont);

}
