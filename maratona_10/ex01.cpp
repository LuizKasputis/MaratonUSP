#include <bits/stdc++.h>
using namespace std;


int cont[30][30];

int main (){
	string s;
	int n;
	cin >> n;
	cin >> s;
	
	for(int i = 0; i < s.size() ; i++){
		if(i != n - 1){
			cont[s[i] - 'A'][s[i+1] - 'A']++;
		}
	}
	
	int k;
	int z;
	int aux = 0;
	for(int i = 0 ; i < 30 ; i++)
		for(int j = 0; j < 30 ; j++)
			if(cont[i][j] > aux){
				k = i;
				z = j;
				aux = cont[i][j];
			}

	printf("%c%c\n",k+'A', z+'A');

}
