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

ll v[MAXN], pos[MAXN], pre[MAXN];

struct Trie{
	int cnt, word;
	map<int,Trie> m;
	
	Trie(){
		cnt = word = 0;
		m.clear();
	}

	void add(ll x, int i){

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

	ll find(ll x, int i){

		if(i == -1 ) return 0;
		
		ll bit = (1ll<<i)&(x);

		if(bit != 0) bit = 1;
	
//		cout << bit ;

		if(bit == 0){
			if(m.count(1) && m[1].cnt ){
		//		cout << "TO AQUI  " << "i = "<< i << " ";
				return m[1].find(x, i - 1) + (1ll<<i);
			}else{
				return m[0].find(x, i - 1);
			}
		}else{
			if(m.count(0) && m[0].cnt){
		//		cout << "TO AQUI  " << "i = "<< i << " ";
				return m[0].find(x, i - 1) + (1ll<<i);
			}else{
				return m[1].find(x, i - 1) ;
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
		maximo = max<ll>( maximo,(ll)max<ll>(pre[i], pos[i]) );


	for(int i = n+1 ; i > 0 ; i--){

		ll incrementa = t.find(pos[i], 41);	
		maximo = (ll)max<ll>(maximo, incrementa);
		t.delet(pre[i-1],41);
	}

	cout << maximo << endl;
} 
