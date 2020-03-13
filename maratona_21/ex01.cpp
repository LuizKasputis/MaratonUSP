#include <bits/stdc++.h>
using namespace std;

int main (){
	
	long long int l , r;

	cin >> l >> r;
	printf("YES\n");
	for(long long int i = l ; i < r  ; i+= 2){
		printf("%lld %lld\n", i, i+1);
	}

}
