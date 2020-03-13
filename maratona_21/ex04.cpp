#include <bits/stdc++.h>
using namespace std;
#define ll long long int

long long int total, troca;
int n;
vector <ll> dir;
vector <ll> esq;

int v[100010];



int main (){
	scanf("%d", &n);

	for(int i = 0 ; i < n ; i++){
		int aux;
		scanf("%d", &aux);
		v[i] = aux;
		total += aux;
	}

	if(total % 2 != 0){
		printf("NO\n");
		return 0;
	}	

	ll d = 0 , e = 0;

	for(int i = 0 ; i < n ; i++){
	
		if(d < total/2 ){
			d += v[i];
			dir.push_back(v[i]);
		}else{
			e += v[i];
			esq.push_back(v[i]);
		}

	}
	if(d == e ){
		printf("YES\n");
		return 0;
	}
	
	if(e == 0){
		printf("NO\n");
		return 0;
	}	


	for(auto it : dir ){
		if(it + e == d - it ){
			printf("YES\n");
			return 0;
		}else if(d - it < it + e){
			
			ll auxD = d - it;
			ll auxE = e + it;
			int i = 0;	
			
			while(auxD < auxE ){
				auxD += esq[i];
				auxE -= esq[i];
				i++;	
			}

			if(auxD == auxE ){
				printf("YES\n");
				return 0;
			}
			
		}
	}

	dir.clear();
	esq.clear();


	d = 0 , e = 0;

	for(int i = n - 1 ; i >= 0 ; i--){
	
		if(e < total/2 ){
			e += v[i];
			esq.push_back(v[i]);
		}else{
			d += v[i];
			dir.push_back(v[i]);
		}

	}
	
	
	if( e == d){
		printf("YES\n");
		return 0;
	}

	if(d == 0){
		printf("NO\n");
		return 0;
	}	


	for(auto it : esq ){
		if( e - it == d + it){
			printf("YES\n");
			return 0;
		}else if(e - it < it + d){
			
			ll auxD = e - it;
			ll auxE = d + it;
			int i = 0;	
			
			while(auxD < auxE ){
				auxD += dir[i];
				auxE -= dir[i];
				i++;	
			}

			if(auxD == auxE ){
				printf("YES\n");
				return 0;
			}
			
		}

	}

	printf("NO\n");


}
