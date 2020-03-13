#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
ll v[10000000];
int n;

void calcula(int total, int aux, int ind){
	if(n - total <= 0){
		ind /= 2;
		total -= aux/2;
		n -= total;
		if(n > 0 && n <= 1*ind)
			printf("Sheldon\n");

		if(n > 1*ind && n <= 2*ind)
			printf("Leonard\n");
			
		if(n > 2*ind && n <= 3*ind)
			printf("Penny\n");
		
		if(n > 3*ind && n <= 4*ind)
			printf("Rajesh\n");
		
		if(n > 4*ind && n <= 5*ind)
			printf("Howard\n");

		return;
	}	
	calcula(total + aux, 2*aux, ind*2);
}


int main (){
	cin >> n;
	calcula(0,5,1);

}
