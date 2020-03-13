#include <bits/stdc++.h>

#define ll long long int 
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define fi first
#define mk make_pair
#define se second
#define FI(n) for(int i = 0; i < n; i++)
#define FOR(i,a,n) for (int i=(a);i<(n);++i)
#define t cout << "TESTE" << endl
#define debug(x) if(on)cout << x << endl
#define on true
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;

using namespace std;

int v[300100], n;
map <int,int> mp;

vector <pii> ans;


void troca(int i, int j){
	int num1 = v[i];
	int num2 = v[j];

	mp[num1] = j;
	v[j] = num1;

	mp[num2] = i;
	v[i] = num2;

}

bool trocaL(int l, int x){

	int i = n ;


	return false;
}


int main (){
	fastio;
	cin >> n;

	for(int i = 1 ; i <= n ; i++){
		int aux;
		cin >> aux;
		v[i] = aux;
		mp[aux] = i;
	}
	
	int l = n / 2;
	int r = n / 2  + 1;

	while(l > 1 && r < n ){

		if(v[l] != l){

			int pos = mp[l];

			if(2*abs(pos-l) >= n){
				/*Aqui é ncessario fazer apenas uma troca*/
				
				troca(l, pos);

				ans.pb(mk(l, pos));

			}else if(pos < l ){
				/*Aqui é necessario fazer duas trocas*/
			
				troca(pos, n);
				troca(l, n);			
		
				ans.pb(mk(pos,n));
				ans.pb(mk(l, n));			

			}else if(pos > l ){
			
				troca(1, pos);
				troca(1, n);
				troca(l , n);
			
				ans.pb(mk(1,pos));
				ans.pb(mk(1, n));
				ans.pb(mk(l, n));

			}
			
			
	
		}

		if(v[r] != r ){

			int pos = mp[r];

			if(2*abs(pos-r) >= n ){
				/*Aqui é ncessario fazer apenas uma troca*/
				
				troca(r, pos);

				ans.pb(mk(r, pos));

			}else if(pos < r ){
				/*Aqui é necessario fazer três trocas*/
			
				troca(pos, n);
				troca(1 , n);
				troca(1, r);			
		
				ans.pb(mk(pos,n));
				ans.pb(mk(1, n));
				ans.pb(mk(1, r));			

			}else if(pos > r ){
			
	
				troca(1, pos);
				troca(1 , r);
			
				ans.pb(mk(1,pos));
				ans.pb(mk(1, r));

			}

		}
		
		l--;
		r++;

	}
	
	if(v[1] != 1 )
		ans.pb(mk(1,n));

	cout << ans.size()  << endl;	

	for(int i = 0 ; i < ans.size() ; i++){
		cout << ans[i].first << " "<< ans[i].second << endl;

	}	

//	for(int i = 1 ; i <= n ; i++)
	//	cout << v[i] << " ";




}
