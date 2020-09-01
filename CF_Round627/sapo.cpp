#include <bits/stdc++.h>
using namespace std;

int t;
string s;

int main (){

	cin >> t ;
	
	while(t--){
		
		cin >> s;
		
		int aux = 1, maior = 1;

		for(int i = 0 ; i < s.length() ; i++){

			if(s[i] == 'L')
				aux ++;
			else
				aux = 1;
		
			maior = max(aux, maior);
			
		}

		cout << maior << endl;

	}


}
