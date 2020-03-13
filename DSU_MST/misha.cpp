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

int pai[MAXN];
int size[MAXN];
map <string,int> m;
vector <string> lista[MAXN];


int find(int x){
	if(pai[x] == x) return x;
	return pai[x] = find(pai[x]);
}

void uni(int x, int j){

	int a = find(x);
	int b = find(b);

	if(size[a] > size[b])
		swap(a,b);

	pai[a] = b;
	size[b] += size[a];
	
}

bool same(int a, int b){
	return find(a) == find(b);
}


int main (){
	int q;

	cin >> q;
	int cont = 1;

	FI(q){
		string s1, s2;
		cin >> s1 >> s2;
			
		if(m[s1] == 0){
			pai[cont] = cont;
			m[s1] = cont++;
		}

		if(m[s2] == 0){
			pai[cont] = cont;
			m[s2] = cont++;
		}
		
		cout << m[s1] << " " << m[s2] << endl;
		
		if(!same( m[s1] , m[s2] ))
			uni(m[s1], m[s2]);


	}
	
	for(auto it : m){
		cout << it.first << " " << it.second << " pai de " << find(it.second) << endl;
		lista[find(it.second)].pb(it.first);

	}
	for(int i = 0 ; i < 1010 ; i++){
		if(lista[i].size() > 0 ){
			sort(lista[i].begin(), lista[i].end());
			cout << lista[i][0] << " " << lista[i][lista[i].size() - 1] << endl;
		}
	}

}





