#include <bits/stdc++.h>
using namespace std;

char m[110][110];

int main (){

	int x , y;

	cin >> x >> y;

	for(int i = 0 ; i < x + 2 ; i++)
		m[i][0] = m[i][y+1] = 'X';

	for(int i = 0 ; i < y + 2 ; i++)
		m[0][i] = m[x+1][i] = 'X';


	for(int i = 1 ; i <= x ; i++){
		for(int j = 1 ; j <= y ; j++){
			if(j%2 == 0)
				if(i%2 == 0)
					m[i][j] = 'B';
				else	
					m[i][j] = 'W';
			else
				if(i%2 == 0)
					m[i][j] = 'W';
				else
					m[i][j] = 'B';
			
		}
	}


	for(int i = 1 ; i <= x ; i++){
		for(int j = 1 ; j <= y ; j++){
			char aux;
			cin >> aux;
			
			if(aux == '-')
				m[i][j] = '-';
		
		}
	}


	for(int i = 1 ; i <= x ; i++){
		for(int j = 1 ; j <= y ; j++){
			
			cout << m[i][j] ;
			
		}
			cout << endl;
	}


}
