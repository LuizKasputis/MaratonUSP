#include <bits/stdc++.h>
using namespace std;

long long int p[100100], v[100100];

int main (){
	
	int n;

	cin >> n;

	for(int i = 1 ; i <= n ; i++){
		int aux;

		cin >> aux;
		v[i] = aux;
		p[i] = aux;

	}

	sort(p+1, p+n+1);

	int m;

	cin >> m ;

	for(int i = 1 ; i <= n ; i++){
	
		v[i] += v[i-1];
		p[i] += p[i-1];
//		cout << p[i] << " " ;
	}


	for(int i = 0 ; i < m ; i++){
		int tipo, l, r;

		cin >> tipo >> l >> r;
		l--;
	
		if(tipo == 1)

			cout << v[r] - v[l] << endl;

		else			
			cout << p[r] - p[l] << endl;


	}

	


}
