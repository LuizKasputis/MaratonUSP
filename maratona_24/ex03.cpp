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

string s;

int main (){
	int n;

	cin >> n;
	cin >> s;

	int a = 0 , b = 0;

	for(int i = 0 ; i < n ;i++){
		if(i&1)
			if(s[i] == '1')
				a++;
			else
				b++;
		else
			if(s[i] == '1')
				b++;
			else
				a++;
	}	

	cout << min(a,b) << endl;


}
