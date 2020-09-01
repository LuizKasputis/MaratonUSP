#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main(){

	int n;

	cin >> n;

	for(int i = 0 ; i < n ; i++){
		int aux;
		cin >> aux;

		if(aux == 25){

			a++;

		}else if(aux == 50){

			a--;
			b++;
			
		}else{
			
			if(b > 0){
				b--;
				a--;
			}else{
				a-=3;
			}

		}
		
		if(a < 0){
			cout << "NO\n";
			return 0;
		}

	}
	
	cout << "YES\n";
}
