#include <bits/stdc++.h>
using namespace std;

map <int,int> cont;
pair <int , int> p;
int contA;

int main (){
	int n , a, aux;

	cin >> n;
	cin >> a;
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &aux);
		if(aux == a){
			contA ++;		
		}	
		if(cont[aux] >= contA || aux == a){
			cont[aux]++;
			if(cont[aux] >= p.second){
				if(p.second == cont[aux] && aux != a){
					p.first = aux;
					p.second = cont[aux];
				}else if( p.second < cont[aux] ){
					p.first = aux;
					p.second = cont[aux];

				}
			}
		}	

		
	}


	if(p.first == a){
		printf("-1\n");
		return 0;
	}

	printf("%d\n", p.first);

}
