#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main (){
	
	cin >> n;
	cin >> s;

	if(n % 2 != 0){
		cout << "-1\n";
		return 0;
	}


	int ans = 0, dir = 0, total = 0;

	for(int i = 0 ; i < n ; i++){
		
		if(s[i] == '('){
			
			dir++;
			
			if(dir == 0){
				ans += total + 1;
				total = 0;
			}else if(dir < 0 ){
				total ++;
			}

			
		}else{
			
			dir --;

			if(dir < 0)
				total ++;

		}

	}

	if(dir){
		cout << "-1\n";
		return 0;
	}

	cout << ans << endl;
}
