#include <bits/stdc++.h>
using namespace std;

int t, n;
int b[220];
vector <int> lista, ordem;

int main(){

	cin >> t;

	while(t--){

		cin >> n;
		
		for(int i = 0 ; i < n ; i++){
			int aux;
			cin >> aux;
			ordem.push_back(aux);
			b[aux] = 1;
		}

		int ok = 0;

		for(auto it : ordem){
			
			lista.push_back(it);
					
	//		cout << it << " ";
			
			ok = 1;
	
			for(int j = it+1 ; j <= 2*n ; j++){
				
				if(b[j] == 0){
			//		cout << j << " ";
					lista.push_back(j);
					b[j] = 2;
					ok = 0;
					break;	
				}
			}

			if(ok)
				break;

		}

		for(int i =1 ; i <= 2*n ; i++)
			b[i] = 0;
		
		ordem.clear();	
		
		if(ok){
			cout << "-1" << endl;
			lista.clear();
			continue;
		}

		for(auto it : lista)
			cout << it << " ";

		lista.clear();

		cout << endl;

	}	

}
