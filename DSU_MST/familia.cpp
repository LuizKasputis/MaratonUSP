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

struct t_aresta{
    int dis;
    int x, y;
};

bool comp(t_aresta a, t_aresta b){ return a.dis < b.dis; }

int n, m;
t_aresta aresta[MAXN];
int pai[MAXN];
int peso[MAXN];
t_aresta mst[MAXN];

int find(int x){
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

void join(int a, int b){
    
    a = find(a);
    b = find(b);
    
    if(peso[a] < peso[b]) pai[a] = b;
    else if(peso[b] < peso[a]) pai[b] = a;
    else{
        pai[a] = b;
        peso[b]++;
    }
    
}

int main (){
	fastio;
	cin >> n >> m;

	for(int i = 1 ; i <= m ; i++){
		int a, b ,c;
	
		cin >> a >> b >> c;
		
		aresta[i].x = a+1;
		aresta[i].y = b+1;	
		aresta[i].dis = c;

	}

	for(int i = 1 ; i <= n ; i++)
		pai[i] = i;

	sort(aresta+1, aresta+m+1, comp);
	int size = 0;

	for(int i = 1 ; i <= m ; i++){
		
		if( find(aresta[i].x) != find(aresta[i].y) ){
			join(aresta[i].x, aresta[i].y);
			mst[++size] = aresta[i];
		}

	}

	ll total = 0;

	for(int i = 1 ; i <= m ; i++)
		total += mst[i].dis;
	cout << total << endl;	

}




