#include <bits/stdc++.h>
using namespace std;


int v[5050], t, n, ok;

int main (){

	cin >> t;

	while(t--){

		cin >> n;
		
		for(int i = 0 ; i < n ; i++)
			cin >> v[i];

		ok = 0;

		for(int i = 0 ; i < n ; i++){
			for(int j = i+2 ; j < n ; j++){
				if(v[i] == v[j]){
					cout << "YES\n";
					ok = 1;
					break;
				}
					
			}

			if(ok)
				break;
		}

		if(ok != 1)
			cout << "NO\n";


	}

}
