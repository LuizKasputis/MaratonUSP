#include <bits/stdc++.h>
using namespace std;

int v[5050];

int main (){
	int n;
	cin >> n;
	for(int i = 0; i < n ; i++)
		cin >> v[i];

	sort(v, v+n);

	int cont = 0;

	for(int i = 0; i < n; i++){
		if(v[i] == v[i+1]){
			int aux = 0;
			int j = i;
			while(v[j] == v[j+1]){
				j++;
				aux++;
			}
			cont = max(aux, cont);
		}
	}

	printf("%d\n", 1 + cont);

}
