#include <bits/stdc++.h>

using namespace std;

long long int permuta(int n ){
	if( n == 0 ) return 0;
	return permuta(n-1) + (n);
}


int main (){
	
	int n, m;
	
	cin >> n >> m;
	
	long long int kmax, kmin;

	kmax = n;

	for(int i = 1 ; i < m ; i++)
		kmax --;
	
	kmax = permuta(kmax-1);

	int div;
	
	if( n % m == 0)
		div = n / m;
	else
		div = n / m + 1;

	long long int min = 0;
	kmin = n;
	
	while( kmin - div >= 0){
		min += permuta(div-1);
		kmin -= div;
	}

	
	cout << min << " " << kmax << endl;

}
