#include <bits/stdc++.h>
using namespace std;

int v[101000], p[101000];

int reverso( int i, int j ){

//	cout << i << " " << j << endl;

	while( i <= j ){
		
		int aux = v[i];
		
		v[i] = v[j];
		v[j] = aux;

		i++;
		j--;

	}


}


int main (){
	
	int n;

	cin >> n;

	for(int i = 0 ; i < n ; i++)
		cin >> v[i];

	int x = v[0];

	for(int i = 1 ; i < n ; i++){
		
		if(x <= v[i])	p[i] = 1;
		else 		p[i] = 2;

		x = v[i];

	}

	int l = 0, r = 0;

	for(int i = 1 ; i < n ; i++){

		if(p[i] == 2){

			l = i-1;
	
			for(int j = i ; j < n ; j++){
				
				if(p[j] == 1)
					break;

				r = j;

			}			
			
			

			reverso(l, r);
			
			break;
			
		}
		
	}

	int ok = 0;

	x = v[0];

	for(int i = 0 ; i < n ; i++){
		
//		cout << v[i] << " " ;		

		if(x > v[i])	
			ok = 1;

		x = v[i];

	}

	if(ok)
		cout << "no" << endl;
	else
		cout << "yes" << endl << l+1 << " " << r+1 << endl;

}
