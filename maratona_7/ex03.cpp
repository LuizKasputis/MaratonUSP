#include <bits/stdc++.h>
using namespace std;

int main (){
	int E = -2000000000;
	int D = 2000000000;
	int n, num, ok = 0;
	
	string operacao;
	char letra;
	cin >> n;

	for(int i = 0; i < n ; i++ ){
		cin >> operacao;
		cin >> num;
		cin >> letra;

		if(letra == 'Y'){
		
			if(operacao == "<"){
				
				if(num <= D)
					D = num - 1;

			}

			if(operacao == "<="){
				
				if(num <= D)
					D = num;
				

			}
			if(operacao == ">"){
				
				if(num >= E)
					E = num + 1;
				
			}
			if(operacao == ">="){
				
				if(num >= E)
					E = num;
			}

		}else if(letra == 'N'){

			if(operacao == "<"){
				
				if(num >= E)
					E = num;

			}

			if(operacao == "<="){
				
				if(num >= E)
					E = num + 1;
				

			}
			if(operacao == ">"){
				
				if(num <= D)
					D = num;
				
			}
			if(operacao == ">="){
				
				if(num <= D)
					D = num - 1;
			}


		}
	}

	if( E > D)
		printf("Impossible\n");
	else
		printf("%d\n",E);

}
