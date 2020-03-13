#include <bits/stdc++.h>
using namespace std;

int main (){
	int a,b,n;

	cin >> n >> a >> b;

	for(int i = 0 ; i*a <= n ; i++){
	
		if( (n  - (i*a) ) % b == 0){
			printf("YES\n");
			printf("%d %d", i , (n - (i*a) ) / b);
			return 0;
		}
	}

	printf("NO\n");

}
