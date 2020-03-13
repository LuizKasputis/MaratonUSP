#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll res;

ll soma(ll n){
	ll soma = 0;

	while( n > 0){
		soma += n%10;
		n /= 10;
	}
	
	return soma;
}


void buscaBinaria(ll r, ll l, ll x){
	
	while( l <= r ){
		ll m = (r + l)/2;

		if(m - soma(m) >= x){
			res = m;
			r = m - 1;
		}else{
			l = m + 1;
		}
	}	

}

int main (){
	ll n , s;

	cin >> n;
	cin >> s;

	buscaBinaria(n+10,0,s);	

	if(res==0){
		printf("0");
		return 0;
	}
	if(res>n){
		printf("0");
		return 0;
	}
	printf("%lld",n-res+1);
}
