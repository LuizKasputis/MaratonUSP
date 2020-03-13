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

ll v[MAXN];
ll numero;


struct Trie{
	int cnt, word;
	map<int,Trie> m;
	
	Trie(){
		cnt = word = 0;
		m.clear();
	}

	void add(int x, int i){

		cnt++;
		
		ll bit = x&(1ll<<i);
	
		if(bit != 0) bit = 1;
			
		if(i == -1){
			word = 1;
			return;
		}

		if(!m.count(bit))
			m[bit] = Trie();

		m[bit].add(x,i-1);
	}
	


	void delet(ll x, int i){
	
		ll bit = x&(1ll<<i);

		if(bit != 0) bit = 1;

		if(i == -1){
			word --;
			cnt --;
			return ;
		}

		m[bit].delet(x, i - 1);
		cnt--;
	}

	ll find(ll x, int i, ll mask){

		if(i == -1 ){ 
			numero = mask;
			return 0;
		}
		ll bit = (1ll<<i)&(x);
	

		if(bit == 0){
			if(m.count(0) && m[0].cnt ){
				return m[0].find(x, i - 1, mask) ;
			}else{
				return m[1].find(x, i - 1, mask|(1ll<<i)) + (1ll<<i);
			}
		}else{
			if(m.count(1) && m[1].cnt){
				return m[1].find(x, i - 1, mask|(1ll<<i));
			}else{
				return m[0].find(x, i - 1, mask ) + (1ll<<i) ;
			}
		}
	}



};

vector <int> lista;

int main (){
	int n;
	cin >> n;

	Trie t = Trie();

	FI(n){
		int aux;
		cin >> aux;	
		lista.pb(aux);
	}


	FI(n){
		int aux;
		cin >> aux;
		t.add(aux, 32);
	}

	for(auto it : lista){
	
		cout << t.find(it,32,0) << " ";
//		cout << numero << endl;
		t.delet(numero,32);

	}				
	


} 
