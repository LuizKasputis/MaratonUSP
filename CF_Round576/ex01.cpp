#include <bits/stdc++.h>
        using namespace std;
 
#define ll long long int 
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define fi first
#define mp make_pair
#define se second
#define FI(n) for(int i = 0; i < n; i++)
#define FOR(i,a,n) for (int i=(a);i<(n);++i)
#define t cout << "TESTE" << endl
#define debug(x) if(on)cout << x << endl
#define on true
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;

int n, v[100100], x, y;


int main (){

	fastio;

	cin >> n >> x >> y;


	FI(n)
		cin >> v[i];

	
	for(int i = 0 ; i < n ; i++){

		bool ok = true;
		int dia = v[i];

		for(int j = i ; j >= i - x && j >= 0; j--)
			if(v[j] < v[i])
				ok = false;

		for(int j = i ; j <= i + y && j < n ; j++)
			if(v[j] < v[i])
				ok = false;
		
		if(ok){
			cout << i+1 << endl;
			return 0;
		}	

	}

	cout << n << endl;
	


}
