#include <bits/stdc++.h>
using namespace std;

int main (){

	int n, energia = 0, x = 0, y , solve = 0;

	cin >> n;

	for(int i = 0 ; i < n ; i++){
		
		cin >> y;
		energia += (x-y);

		if(energia < 0){
			solve += energia;
			energia = 0;
		}	
	
		x = y;

	}

	cout << abs(solve) << endl;

}
