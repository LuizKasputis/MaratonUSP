#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;

	cin >> t;

	while(t--){
		int a, b, x, y;
		cin >> a >> b >> x >> y;
		
		
		cout << max(max(b - y - 1, y)*a, max(a - x - 1, x)*b) << endl;
			
	}

}
