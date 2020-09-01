#include <bits/stdc++.h>

using namespace std;


int main (){
	int n, m , a ,b;

	cin >> n >> m >> a >> b;


	if( (1.0*b)/(1.0*m) < 1.0*a ){

		if( n % m != 0){
		
			int resto = n % m;
	
			if( a <= b )
				
				if( a*resto <= b )
					cout << (n/m)*b + a*resto << endl;
				else
					cout << (n/m + 1)*b << endl;
				
			else	
				cout << (n/m + 1)*b << endl;
			

		

		}else{
			
			cout << (n/m)*b << endl;
		
		}


	}else{
		cout << n*a << endl;
	}
	

}
