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

int dis[10000];
bool vis[10000];
int n;

vector <pii> adj[10000];

void Dijkstra(int inicio){


        /*SETAR PARA TODOS OS NÓ COMO INF*/
        for(int i = 1 ; i <= n ; i++) 
            dis[i] = INF;

        dis[inicio] = 0;
	vis[inicio] = true;
        /*Greater garante que o primeiro elemento será menor distância entre os nós*/
        priority_queue < pii, vector<pii>, greater<pii> > pq;

        pq.push(mp(dis[inicio], inicio) );

        while( !pq.empty() ){
		
		int no = pq.top().second;
		pq.pop();

		

                for(auto x : adj[no]){
                    
                    int v = x.second;
                    int distancia = x.first;

                    if(dis[v] > dis[no] + distancia){
			cout << "to aqui" << endl;
                        dis[v] = dis[no] + distancia;

			if(!vis[v])
                        	pq.push(mp( dis[v], v) );
			vis[v] = true;
                    }

                }

        }

 }



 int main (){
	fastio;

 	int arestas;

 	cin >> n >> arestas;

 	for(int i = 0 ; i < arestas ; i++){
 		
 		int a, b, c;
 		cin >> a >> b >> c;
 		adj[a].pb(mp(c , b));
 		adj[b].pb(mp(c , a));

 	}

 	Dijkstra(1);

 	for(int i = 2 ; i <= n ; i++)
 		cout << dis[i] << endl;


 }


