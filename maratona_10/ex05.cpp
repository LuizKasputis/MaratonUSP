#include <bits/stdc++.h>
using namespace std;

int v[100100];
int A[100100], B[100100];
int MA[100100], MB[100100];
int n, k, conta;


int main (){
	
	cin >> n;
	cin >> k;
	string s;

	cin >> s;
	
	int a = 0;
	int b = a;
	int res = 0;
	int j = 0;

	for(int i = 0 ; i < n ; i++){
		if(s[i] == 'a')
			a++;
		else
			b++;

		if( min(a,b) > k ){
			if(s[j] == 'a')
				a--;
			else
				b--;
			j++;
		}else{
			res = max(res, a + b);
		}
		
	}
	cout << res << endl;

}
