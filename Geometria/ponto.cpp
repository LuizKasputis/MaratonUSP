#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


struct pt{
	int x, y;
	int id ;
	/*Constutor Padrão*/
	pt(){}

	pt(int a, int b){
		x = a; y = b;
	}

	int operator ^(pt p2){
		return x*p2.y - y*p2.x;
	}

};

pt pontos[100];

const long double eps = 1e-7;
/*NUNCA comparar doubles, usar sempre um #define eps e definir um e usar um funçao de comparação*/
int sgn(double a){
	if(a < -eps) return -1;
	if(a > +eps) return 1;
	return 0;
}

/*Comparando os dois pra verificar se são iguais ou não*/
int cmp(double a, double b){
	return sgn(a-b);
}



int main (){
	int x , y, n;
	
	cin >> n;

	for(int i = 0 ; i < n ; i++){
		pt a;
		cin >> x >> y; 
		a.x = x;
		a.y = y;
		pontos[i] = a;
	}

	int b = pontos[1] ^ pontos[0];

	cout << b << endl;
	
}
