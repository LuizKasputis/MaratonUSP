#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int 
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define fi first
#define mk make_pair
#define se second
#define FI(n) for(int i = 0; i < n; i++)
#define FOR(i,a,n) for (int i=(a);i<(n);++i)
#define t cout << "TESTE" << endl
#define debug(x) if(on)cout << x << endl
#define on true
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;


const int MAX = 300005;
const int MAX1 = 1e6 + 5;

int bit[MAX], mark[MAX1], resp[MAX], a[MAX];


pair < int, pii> lista[MAX];


void uptade(int x, int val){

	for(; x < MAX ; x += (x & -x))
		bit[x] += val;	
	

}

int soma(int x){
	int sum = 0;	

	for(; x > 0 ; x -= (x & -x ))
		sum += bit[x];
	
	return sum;
}



int main (){
	fastio;

	int n , q, ind;

	cin >> n;

	for(int i = 1 ; i <= n ; i++)
		cin >> a[i];

	cin >> q;

	for(int i = 0 ; i < q ; i++){
		int a, b;

		cin >> lista[i].second.first >> lista[i].first ;
		lista[i].second.second = i;

	}

	sort(lista , lista + q);

	memset(mark, -1, sizeof(mark));
	memset(bit, 0 , sizeof(bit));


	ind = 0;

	for(int i = 1 ; i <= n ; i++){
	
		if(mark[a[i]] != -1)
			uptade(mark[a[i]] , -1);	


		mark[a[i]] = i;
		uptade(i, 1);

		while(ind < q && lista[ind].first == i ){
			
			resp[lista[ind].second.second] = soma(lista[ind].first) - soma(lista[ind].second.first - 1) ;

			ind ++;
		}


	}
	
	for(int i = 0 ; i < q ; i++)
		cout << resp[i] << "\n";



}
