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
#define tsludkfh cout << "TESTE" << endl
#define debug(x) if(on)cout << x << endl
#define on true
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;

int a[200100], n;
ll bit[200100];

void uptade(int x, int i){

	for(; i <= n ; i += i&-i)
		bit[i] += x;

}

ll soma(int i){
	
	ll sum = 0;

	for(; i > 0 ; i -= i&-i)
		sum += bit[i];

	return sum;

}


int main  (){
	fastio;
	int cont = 1, tt = 0;
	while(cin >> n, n){

		if(tt++) cout << endl;

		cout << "Case "<< cont++ <<":\n"; 

		for(int i = 1 ; i <= n ; i++) 
			cin >> a[i];

		for(int i = 1 ; i <= n ; i++)
			uptade(a[i], i);
	
		string aux;
		while(cin >> aux, aux!="END"){
			int a, b;
			cin >> a >> b;
			
			if(aux == "M"){	
				cout << soma(b) - soma(a - 1) << endl;
			}else{
				ll res = soma(a) - soma(a - 1 );
				uptade(-res, a);
				uptade(b, a);
			}
		

		}
		for(int i = 0 ; i <= n ; i++)
			bit[i] = 0;
		
	}

}
