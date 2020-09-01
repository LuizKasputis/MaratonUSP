#include <bits/stdc++.h>
using namespace std;

string s;
long long int num;

long long int eleva(int i){

	if(i==0)
		return 1;

	return eleva(i-1)*10;

}

int main (){


	cin >> s;
	
	int i = s.length()-1;
	int primeiro = 0;
	int j = 0;	

	while( i >= 0 ){
		long long int aux;

		aux = s[j++] - '0';
			
		if(aux < 5 )
			num += aux * eleva(i);
		
		else
			if( primeiro || aux != 9 )
				num += (9 - aux) * eleva(i);
			else
				num  += aux * eleva(i);

		primeiro = 1;
		i--;
	}

	cout << num << endl;

}
