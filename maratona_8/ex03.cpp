#include <bits/stdc++.h>
using namespace std
;
#define ll long long int

ll eleva(int n){
	ll cont = 1;
	for(int i = 0 ; i < n ; i++)
		cont *= 10;
	return cont;
}

ll gcd(int a, int b){
	if(a == 0)
		return b;
	return gcd( b%a , a);	
}

int main (){
	long long int n, k;
	cin >> n;
	cin >> k;
	
	ll pot = eleva(k);

	ll maior = gcd(max(n,pot),min(n,pot));
	
	ll cima = n*pot;
	printf("%lld\n", cima/maior);


}
