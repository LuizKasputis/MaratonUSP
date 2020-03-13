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

vector <int> a;

int main (){

	FI(5){
		int aux;
		cin >> aux;

		a.pb(aux);
	}

	ll cont = 0;

	for(int i = 0 ; i < 5 ; i++){
		for(int j = i + 1 ; j < 5 ; j++){
			for(int k = j + 1 ; k < 5 ; k++){
				if(a[i] + a[j] > a[k] && a[i] + a[k] > a[j] && a[j] + a[k] > a[i]){
					cont++;
				}
			}	
	
		}


	}


	cout << cont << endl;

}
