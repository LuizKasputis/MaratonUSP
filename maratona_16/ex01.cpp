#include <bits/stdc++.h>
using namespace std;
int num;


int main (){
	cin >> num;

	int cont = 0;

	for(int i = 0 ; i < 31; i++)
		if(num & ( 1<<i) )
			cont++;

	printf("%d\n", cont);

}
