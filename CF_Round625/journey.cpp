#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define total 400100
long long int n, aux, ans;
long long int sum[800100];


int main (){
	fastio;
	cin >> n;

	
	for(int i = 0 ; i < n ; i++){
		cin >> aux;

		sum[total + aux - i] += aux;

		ans = max( sum[total+aux-i] , ans);
	}

	cout << ans << endl;
}
