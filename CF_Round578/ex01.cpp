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
bool v[10];

int main (){
	fastio;
	int n;
	cin >> n;
	string s;
	cin >> s;
	int l = 0;
	int r = 9;
	for(int i = 0 ; i < n ; i++){
		if(s[i] == 'L'){
			while(v[l] == true && l < 9){
				l++;
			}
			v[l++] = true;
		}else if(s[i] == 'R'){
			while(v[r] == true && r > 0){
				r--;
			}
			v[r--] = true;
		}else{
			int num = s[i] - '0';
			v[num] = false;

			if(num <= l ){
				l = 0;
			}
			if(num >= r ) {
				r = 9;
			}

		}
	}
	for(int i = 0 ; i < 10 ; i++)
		if(v[i])
			cout << "1";
		else
			cout << "0";
}
