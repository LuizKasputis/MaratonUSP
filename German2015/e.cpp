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
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;


bool vis[10001000];
bool iguais[1000100];
int dis[1000100];
vector <pii> adj[1000100];
int cid, arestas , obrig;

bool dij(int inicio){

	priority_queue < pii, vector<pii>, greater<pii> > pq;

	pq.push(mp(dis[inicio], inicio));

	while(!pq.empty()){
		
		int no = pq.top().second;
		pq.pop();

		if(vis[no])
			continue;
		vis[no] = true;
		
		for(auto x : adj[no]){
		
			int v = x.second;
			int distancia = x.first;	

	//		cout << "dis entre " << no << " e " << v << " "<< distancia << endl;

			if(dis[v] > dis[no] + distancia){
					
				dis[v] = dis[no] + distancia;
				iguais[v] = iguais[no];
				
				pq.push(mp(dis[v],v));	

			}else if(dis[v] == dis[no] + distancia){
				
				iguais[v] = true;
		
			}

	
		}

	}
	

}


int main (){
	fastio;
	int a, b, c;
	cin >> cid >> arestas >> obrig;

	int aux;

	for(int i = 0 ; i < obrig ; i++)
		cin >> aux;

	FI(arestas){
		int a, b, c;
		cin >> a >> b >> c;
		adj[a].pb(mp(c,b));
		adj[b].pb(mp(c,a));
	}

	for(int i = 1 ; i <= cid ; i++)
		dis[i] = INF;

	dis[1] = 0;
	dij(1);

	//for(int i = 1 ; i <= cid ; i++)
	//	cout << dis[i] << endl;
	
	if(iguais[cid]){
		cout << "yes\n";
	}else{	
		cout << "no\n";
	}

} 
