#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int v[110];

int main (){
	int n;
	cin >> n;

	for(int i = 0 ; i < n; i++)
		cin >> v[i];

	int ok = 0;
	int i;

	for(i = 0 ; v[i] != 1 && i < n  ; i++);
	
	if( i == n){
		printf("0\n");
		return 0;
	}	

	ll total = 1;
	int cont = 0;

	for(int j = i ; j < n ; j++){
		if(v[j] == 0)
			cont++;
		if(v[j] == 1 && cont != 0){
			total *= (cont+1);
			cont = 0;
		}		
	}

	cout << total << "\n";
}
