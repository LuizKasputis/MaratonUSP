#include <bits/stdc++.h>
using namespace std;


int main (){
	int n1, n2;

	cin >> n1 >> n2;

	if(n1 == n2){
		cout << "=\n";
		return 0;
	}
	if( n1*log(double(n2)) > n2*log(double(n1)) ){
		cout << "<\n";
		return 0;
	}

	if( n2*log(double(n1)) > n1*log(double(n2)) ){
		cout << ">\n";
		return 0;
	}else{
		cout << "=\n";
	}


}
