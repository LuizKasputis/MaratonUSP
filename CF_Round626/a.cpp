#include <bits/stdc++.h>
using namespace std;

int v[140], n, t;

int main (){
	
	cin >> t;


	while(t--){
		
		cin >> n;

		for(int i = 0 ; i < n ; i++)
			cin >> v[i];

		if(n == 1){
			if(v[0] % 2 == 0)
				cout << "1\n1\n";
			else
				cout << "-1\n";
			continue;
		}
	
		if(v[0] % 2 == 0)
			cout << "1\n1\n";
		else
			if(v[1] % 2 == 0)
				cout << "1\n2\n";
			else
				cout << "2\n1 2\n";

	
	}


}
