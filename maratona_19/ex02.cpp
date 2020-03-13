#include <bits/stdc++.h>
using namespace std;

long long int solve(int n){
	if(n == 0)
		return 1;
	return (n*6 + solve(n-1));

}

int main (){
	long long int n;

	cin >> n;
	
	long long int an = 6*(n);
	if(n == 0){
		printf("1\n");
		return 0;
	}

	printf("%lld\n", ((6 + an)*n)/2 + 1);

}
