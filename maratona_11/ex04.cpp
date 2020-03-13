#include <bits/stdc++.h>
using namespace std;

string s;

long long int solve(){
	long long int cont = 0;
	int i = 0;
	if(s[i] % 4 == 0)
		cont++;

	for(i = 1 ; i < s.size() ; i++){

		if( (s[i - 1]*10 + s[i]) % 4 == 0){
			cont += i;
		}
			
		
		if(s[i]  % 4 == 0)
			cont++;

	}

	return cont;
}

int main (){
   	ios_base::sync_with_stdio(false);		
	cin >> s;
	printf("%lld\n", solve());
}
