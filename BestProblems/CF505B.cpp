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

int pai[110][110];
int sz[110][110];

int find(int x, int c){

	if(pai[x][c] == x ) return x;
	return pai[x][c] = find(pai[x][c], c);

}

void UNION(int a, int b, int c){

	int paiA = find(a,c);	
	int paiB = find(b,c);

	if( paiA == paiB ) return;
	
	if( sz[paiA][c] > sz[paiB][c] ) swap(paiA,paiB);

	pai[paiA][c] = paiB;
	
	sz[paiB][c] += sz[paiA][c];	

}

int main (){
	fastio;

	int n, m;

	cin >> n >> m;

	for(int i = 1 ; i < 101 ; i++)
		for(int j = 1 ; j < 101 ; j++)
			pai[j][i] = j;

	FI(m){
		int a, b, c;

		cin >> a >> b >> c;

		UNION(a,b,c);

	}

	int q;
	cin >> q;

	FI(q){
		int a, b;
		cin >> a >> b;
	
		int cont = 0;
	
	
		for(int j = 1 ; j <= 100 ; j++)
			if( find(a,j) == find(b,j) ) cont ++;

		cout << cont << "\n";
	}

} 
