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
#define MAXM 100100 

vector <pii> lista;
vector <int> aux;
stack <int> ans;

int mark[MAXN];
int pai[MAXN];
int peso[MAXN];


int find(int x){
	if(pai[x] == x) return x;
	return pai[x] = find(pai[x]);
}

void UNION(int a, int b){

	int x = find(a);
	int y = find(b);

	if(peso[x] < peso[y]){
		pai[x] = pai[y];
	}else{
		pai[y] = x;
		if(peso[x] = peso[y])
			peso[x]++;
	}

}



int main (){
	int n, m, retira;

	cin >> n >> m;

	for(int i = 1 ; i <= m ; i++){
		int a, b;
		cin >> a >> b;
		lista.pb({a,b});
	}

	cin >> retira ;

	for(int i = 0 ; i < retira ; i++){
		int a;
		cin >> a;
		mark[a] = 1;
		aux.pb(a);
	}
	
	for(int i = 1 ; i <= n ; i++)
		pai[i] = i;

	ll conta = n;
	
	for(int i = 1 ; i <= m ; i++){

		if(mark[i]  != 1){

			int x = lista[i-1].first;
			int y = lista[i-1].second;
//			cout <<"TO aqui "<< x << " "<< y << endl;
		
			if(find(x) != find(y)){
				conta --;
				UNION(x,y);
			}
		}
	}

	ans.push(conta);
	
	for(int i = retira-1 ; i > 0 ; i--){

		int linha = aux[i];
		int x = lista[linha-1].fi;
		int y = lista[linha-1].se;
		
		if(find(x) != find(y)){
			conta--;
			UNION(x,y);
		}
		
		ans.push(conta);		
		
	}
			
	while(!ans.empty()){
		cout << ans.top() << " ";
		ans.pop();
	}

	cout << endl;	
}
