#include <bits/stdc++.h>
using namespace std;

int n;
int a[120], b[120];


int main (){

	cin >> n;

	int x = 0, y = 0;

	for(int i = 0 ; i < n ; i++)
		cin >> a[i];

	for(int i = 0 ; i < n ; i++)
		cin >> b[i];


	for(int i = 0 ; i < n ; i++){
		if( a[i] == b[i] )
			continue;

		if(a[i] == 1)
			x++;
		else
			y++;

	}

	if(x == 0){
		cout << "-1" << endl;
		return 0;
	}else{
		if( (1+y) % x == 0)	
			cout << (1+y)/x << endl;
		else
			cout << (1+y)/x + 1 << endl;
	}

}
