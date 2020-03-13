#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

vector <int> lista[25];
vector <int> ans;

int primos[5000000];
 
bool is_set(int x, int i){
	bool ret = ((x&(1<<i))!=0);
	return ret;
}

string inverte(string s){
	string aux;
	for(int i = 0; i < s.size() ; i++)
		if(s[i] == '0')
			aux.push_back('1');
		else
			aux.push_back('0');

	return aux;
}

string transBinario(int num){
	string s;
	for(int i = 0; i < (int)log2(num)+1 ; i++)
		if(is_set(num, i))
			s.push_back('1');
		else
			s.push_back('0');
		
	return s;
}

int binario(char s[]){
	int tam = 0, num = 0 ;

	while(s[tam] != '\0'){
		tam++;
	}

	for(int i = tam-1; i >= 0 ; i--){
		if(s[i] == '1')
			num += (1<<((tam-1)-i));
	}

	return num;

}

int binarioS(string s){
	int tam = 0, num = 0 ;

	while(s[tam] != '\0'){
		tam++;
	}

	for(int i = tam-1; i >= 0 ; i--){
		if(s[i] == '1')
			num += (1<<((tam-1)-i));
	}

	return num;

}

void set_primos(){

	for(int i=3; i < (1<<22) ; i+=2){
		if(primos[i] == 0){
			for(int j = i + i; j < (1<<22) ; j+=i)
				primos[j] = 1;
		}
	}

}

int main(){
	
	set_primos();

	lista[1].push_back(1);
	lista[2].push_back(3);

	ans.push_back(3);
	for(int i = 3; i < 22 ; i++){
		for(int j = 0; j < lista[i-2].size() ; j++){
			//printf("num = %d\n", ((~lista[i-2][j])<<1));

			string stry = transBinario(lista[i-2][j]);
			string nova = inverte(stry);
			int numy = binarioS(nova);



			int num1 = 1<<(i-1) | lista[i-2][j]<<1 | 1  ;
			int num2 = 1<<(i-1) | numy<<1 | 1  ;			//printf("num1 = %d , num2 = %d \n", num1, num2);

			//printf("%d\n", num2);
			if(num1%2 != 0 && primos[num1] == 0)
				ans.push_back(num1);
			if(num2%2 != 0 && primos[num2] == 0)
				ans.push_back(num2);

			lista[i].push_back(num1);
			lista[i].push_back(num2);

		}
	}

	char s[25];
	sort(ans.begin(), ans.end());
	while(scanf("%s", s) != EOF){
		
		int input = binario(s);
		auto it = lower_bound(ans.begin(), ans.end(), input);
		string bin = transBinario(*it);
		
		cout << bin << "\n";
	}

}