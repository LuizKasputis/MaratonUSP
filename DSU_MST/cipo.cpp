#include <bits/stdc++.h>
using namespace std;
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
 
	
struct t_aresta{
    int dis;
    int x, y;
};

bool comp(t_aresta a, t_aresta b){ 
	return a.dis < b.dis; 
}

#define MAXN 50500
#define MAXM 2000400

int n, m; // número de vértices e arestas
t_aresta aresta[MAXM];


int pai[MAXN];
int peso[MAXN];
ll conta[MAXN];

t_aresta mst[MAXM];

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


int main(){
   	fastio; 
	int x, cont = 1;

	while (cin >> n){
  	
	 	 cin >> m;

	   	 for(int i = 1; i<=m ;i++)
   		     cin >> aresta[i].x >> aresta[i].y >> aresta[i].dis;
    
   		for(int i = 1 ; i <= n ; i++) pai[i] = i;
   		memset(peso, 1, sizeof(peso)); 

	 	sort(aresta+1, aresta+m+1, comp);
		ll conta = 0;

  		for(int i = 1;i <= m;i++){
      		
  			 if( find(aresta[i].x) != find(aresta[i].y) ){
       			       join(aresta[i].x, aresta[i].y); 
          		       conta += aresta[i].dis;
       			 }
       	 
    		 }



	   cout << "Instancia "<< cont++ << endl;	
	   cout << conta << endl << endl;
	}

}


