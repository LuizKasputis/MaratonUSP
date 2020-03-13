#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(a == 0)
		return b;
	return gcd(b%a, a);
}

bool checkprim(int aux){
	if(aux%2 == 0)
		return true;

	for(int i=2; i<= aux/2; i++)
		if(aux % i == 0)
			return true;

	return false;
}


int main (){
	int n;

	cin >> n;

	if(n%2 == 0){
		int d = n/2;
		int e = n/2;

		while(true){
			if(checkprim(d) == true && checkprim(e) == true)
				break;
			d++;
			e--;
		}
	
		printf("%d %d\n", d, e);
	}else{
		int d = n/2+1;
		int e = n/2;
		while(true){
			if(checkprim(d) == true && checkprim(e) == true)
				break;
			d++;
			e--;
		}
		if(d == n){
			printf("%d %d\n", n/2+1, n/2);
		}else{
			printf("%d %d\n", d, e);
		}
	}

}
