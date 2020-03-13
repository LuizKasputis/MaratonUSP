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

int memo[MAXN];
int ini[MAXN];
int pai[MAXN];

int find(int x){

	if(pai[x] == x ) return x;

	int ponteiro = find(pai[x]);
	
	memo[x] = min( memo[x] , memo[pai[x]] );

	return pai[x] = ponteiro;
}

void UNION(int a, int b){
	
	if(find(a) == find(b)) return;

	pai[b] = a; 

}


int main (){
	fastio;
	int n, m;

	cin >> n >> m;

	for(int i = 1 ; i <= n ; i++){
		cin >> ini[i];	
		memo[i] = ini[i];
		pai[i] = i;
	}

	char a;
	int b,c;


	for(int i = 0 ; i < m ; i++){
		cin >> a;
		if(a == '?'){
			cin >> b;
			find( b );
			cout << memo[b] << "\n" ;	
		}else{
			cin >> c >> b;
			UNION(c,b);
		}
	}

} 
