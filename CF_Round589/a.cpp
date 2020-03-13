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
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;
#define MAXN 100100

int m[MAXN][10];

int main (){
	int x, y;
	cin >> x >> y;	

	for(int i = x ; i <= y ; i++){
		int b, a = i;
		b = a;
		while(a > 0){

			if(m[b][a%10] == 1)
				break;
			m[b][a%10] = 1; 
			a = a/10;

		}

		if(a == 0){
			cout << b << endl;
			return 0;
		}
	}
	
	cout << "-1\n";
	
} 
