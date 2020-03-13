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

char m[1010][1010];

int main (){
	fastio;

	int n, q;

	cin >> n >> q;


	for(int i = 0 ; i < n ; i++){
		string s;
		cin >> s;

		for(int j = 0 ; j < s.size() ; j++)
			m[i][j] = s[j];

	}

	ll total = 0;
	
	for(int i = 0 ; i < q ; i++){
		int ai, v[1100], maior = 0;
		
		cin >> ai;

		for(int j = 0 ; j <= 5 ; j++)
			v[j] = 0;

		for(int j = 0 ; j < n ; j++){
			v[m[j][i] - 'A'] += 1;
			maior = max(maior, v[m[j][i] - 'A']);
		}

		total += ai*1LL*maior;
	}
	
	cout << total << endl;


}
