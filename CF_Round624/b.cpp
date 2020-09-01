#include <bits/stdc++.h>
using namespace std;

pair <int, int> a[120];
int v[120], p[120];
int t, n, np, ok, aux, iterador;


int main (){
	cin >> t;


	while(t--){
		cin >> n >> np;
	
		
		for(int i = 0 ; i < n ; i++){
			
			cin >> aux;

			a[i].first = aux;
			a[i].second = i;

		}

		sort(a, a+n);

		for(int i = 0 ; i < np ; i++){
			cin >> aux;

			p[aux-1] =  1;

		}
		
		ok = 0;

		for(int i = 0 ; i < n ; i++){

			iterador = a[i].second;
		
	
			if(iterador == i )
				continue;

			if(i < iterador){
				
				for(int j = iterador ; j > i ; j--){

					if(p[j-1] == 0){
						cout << "NO\n";
						ok = 1;
						break;
					}
				}


			}else{

				for(int j = iterador ; j < i ; j++){

					if(p[j] == 0){
						cout << "NO\n";
						ok = 1;
						break;
					}

				}


			}	

			if(ok)
				break;	
		}

		for(int i = 0 ; i < n ; i++)
			p[i] = 0;
			
		if(ok == 0)
			cout << "YES\n";
		

	}


}
