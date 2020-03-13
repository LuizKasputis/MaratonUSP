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
#define debug(x) if(on)cout << x << endl
#define on true
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;
#define MAXN 100100
 
int v[MAXN], pos[MAXN], pre[MAXN];

struct Trie{
 
	map<int,Trie> m;
	int cont, word;
 
	Trie(){
		m.clear();
		word = cont = 0;
	}
 
	void add(int num, int i){
		cont++;
			
		int bit = (1ll<<i)&num;
	
		if(i == -1){
			word = 1;
			return;
		}
 
		int x;
 
		if(bit > 0)
			x = 1;
		else
			x = 0;
 
		if(!m.count(x))
			m[x] = Trie();
 
 
		m[x].add(num, i - 1);
	}
 
	void delet(int num, int i){
 
		int bit = (1<<i)&num;
 
		if(i == - 1){
			word --;
			cont --;
			return;
		}
		int x;
 
		if(bit > 0)
			x = 1;
		else
			x = 0;	
 
		
		m[x].delet(num, i-1);
		cont--;
	}	
 
 
	int busca(ll num, int i){
 
 
		if(i == -1)
			return 0;
 
		int bit = (1ll<<i)&(num);			
 
 
		if(bit == 0){
			if(m.count(1) && m[1].cont){
//				cout << (1ll<<i) << " cont = " << cont << endl ;
				return m[1].busca(num, i-1) + (1ll<<i);
			}else{
				return m[0].busca(num, i-1);
			}
		}else{
			if(m.count(0) && m[0].cont){
//				cout << (1ll<<i) << " cont = " << cont << endl ;
				return m[0].busca(num, i-1) + (1ll<<i);
			}else{
				return m[1].busca(num, i-1);
			}
		}
	}
 
};

int main (){
	int n;
	cin >> n;

	Trie t = Trie();

	for(int i = 1 ; i <= n ; i++){
		cin >> v[i];	
		pos[i] = pre[i] = v[i];
	}

	for(int i = 1 ; i <= n ; i++)
		pre[i] = pre[i] ^ pre[i-1];

	for(int i = n  ; i > 0 ; i--)
		pos[i] = pos[i] ^ pos[i+1];


	for(int i = 1 ; i <= n ; i++)
		t.add(pre[i], 41);

	ll maximo = 0;

	for(int i = 1 ; i <= n ; i ++)
		maximo = max( maximo,(ll)max(pre[i], pos[i]) );

	

	for(int i = n+1 ; i > 0 ; i--){

		ll incrementa = t.busca(pos[i], 41);	
		maximo = (ll)max(maximo, pos[i]^incrementa);
		t.delet(pre[i-1],41);

	}

	cout << maximo << endl;

} 

