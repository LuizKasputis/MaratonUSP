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


int v[110];

int main (){
	
	int n;
	
	cin >> n;

	FI(n)
		cin >> v[i];
	int i = 0;

	while(i < n - 1){

		if(v[i] != v[i+1]){ 

			if(v[i] > v[i+1]){
				v[i] = v[i] - v[i+1];
				i = 0 ;
			}else{
				v[i + 1] = v[i + 1] - v[i];
				i = 0 ;
			}
			
			continue;

		}
		i++;
	}

	int soma = 0;

	FI(n)
		soma += v[i];


	cout << soma << endl;
	
}
