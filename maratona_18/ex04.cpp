#include <bits/stdc++.h>
using namespace std;

int solve[10010000][2];

int main (){
	long long int ac = 0;
	int n, a, b;
	
	scanf("%d", &n);
	b = 0;


	solve[0][1] = 1;

	for(int i = 0 ; i < n ; i++){
		scanf("%d", &a);
		b^=a;
		ac+= solve[b][i%2];
		solve[b][i%2]++;
	}

	printf("%lld\n", ac);
}
