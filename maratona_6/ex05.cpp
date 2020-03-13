#include <bits/stdc++.h>
using namespace std;

vector <long long int> lista;
vector <long long int> divisores;


void calcula(long long int n, long long int num){
	if(n == 1){
		divisores.push_back(1);
		return;
	}
	for(long long int i=1 ; i <= n; i++){
		if(num%i == 0){
			divisores.push_back(i);
			if(num/i != i)
				divisores.push_back(num/i);
		}	
	}
}

int main (){
	long long int n , k;
	cin >> n;
        cin >> k;
	calcula(sqrt(n), n);
	
	sort(divisores.begin(), divisores.end());
	
	long long int i = 1;

	for(auto it : divisores ){
		if(i == k){
			printf("%lld\n",it);
			return 0;
		}
		i++;
	}

	printf("-1\n");
	
}
