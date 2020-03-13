#include <bits/stdc++.h>
using namespace std;
int main (){
	long long int n, k;

	cin >> n >> k;

	if(k > n){
		if(k % n == 0){
			printf("%lld", k/n);
		}else{
			printf("%lld", k/n+1);
		}
	}else{
		printf("1\n");
	}	
}

