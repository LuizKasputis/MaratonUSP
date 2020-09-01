#include <bits/stdc++.h>
using namespace std;

int v[3];

bool check(int a, int ans){
	if(a >= 0)return false;
	cout << ans << endl;
	return true;
}

int main (){
	int t;

	cin >> t;
	
	while(t--){

		int a, b, c;

		cin >> v[0] >> v[1] >> v[2];
		sort(v, v+3);
	
		c = v[0];
		b = v[1];
		a = v[2];
;	
		int ans = 0;
	
		a -= 1;		
		if(check(a, ans)) continue;
		ans ++;

		b -=1;
		if(check(b, ans)) continue;
		ans++;

		if(a - 1 >= 0 && b - 1 >= 0){
			a-=1;
			b-=1;
			ans ++;
		}

		c -=1;		
		if(check(c, ans)) continue;
		ans++;

		if(a - 1 >= 0 && c - 1 >= 0){
			c-=1;
			a-=1;
			ans++;
		}

		if(b - 1 >= 0 && c - 1 >= 0){
			c-=1;
			b-=1;
			ans++;
		}

		if(a - 1 >= 0 && b - 1 >= 0 && c - 1 >= 0)
			ans++;

		
		cout << ans << endl;
	}

}
