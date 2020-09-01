#include <bits/stdc++.h>
using namespace std;

int t;

int main (){
	cin >> t;

	while(t--){
		int a, b;
		cin >> a >> b;

		if(a == b){
			cout << "0\n";
			continue;
		}
		

		if(a > b ){
		
			if( (a-b) % 2 == 0)
				cout << "1\n";
			else	
				cout << "2\n";

		}else{
			
			if( (b-a) % 2 != 0){
				cout << "1\n";
			}else{
				cout << "2\n";
			}

		}

	}

}
