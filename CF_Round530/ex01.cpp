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

int main (){

	int w , h, w1, h1, h2, w2;

	int total = 0;

	cin >> w >> h;
	cin >> w1 >> h1;
	cin >> w2 >> h2;

	total = w;
	for(int i = h ; i >= 0 ; i --){
		total += i;
		
		if(i == h1)
			total -= w1;
		
		if(i == h2)
			total -= w2;

		
		if(total < 0)
			total = 0;

	}

	cout << total << "\n";
		

}
