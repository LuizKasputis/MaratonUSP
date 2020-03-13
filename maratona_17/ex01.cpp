#include <bits/stdc++.h>
using namespace std;

int conta(int n1, int n2){
	int a1 , a2;
	if( n1 >= n2){
	
		a1 = abs(n1-n2);
		a2 = n2 + abs(n1 - 9) + 1;	

	}else{
	
		a1 = abs(n2-n1);
		a2 = n1 + abs(n2 - 9) + 1;	

	}

	//printf("a1 = %d , a2 = %d \n", a1, a2);
	
	return min(a1,a2);
	
}

int main (){
	int n;
	string s1, s2;

	cin >> n;
	cin >> s1 >> s2;

	int cont = 0;

	for(int i = 0 ; i < n ; i++)
		cont += conta(s1[i] - '0', s2[i] - '0');


	printf("%d\n", cont);
}
