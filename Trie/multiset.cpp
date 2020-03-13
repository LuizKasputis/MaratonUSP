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
	fastio;
	int q, num;

	cin >> q;

	Trie t = Trie();

	t.add(0,31);

	while(q--){
		char aux;
		ll num;

		cin >> aux;
		cin >> num;
	
		if(aux == '+'){
			t.add(num,31);
		}else if(aux == '?'){
			cout <<	t.busca(num,31) << endl;
		}else{
			t.delet(num,31);
		}


	}



} 
