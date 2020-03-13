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

set <int> primos;
set <int> seq;

int main (){
	fastio;
	int T;

	cin >> T;

	while(T--){
			
		int n , sub, tira = 0, cont = 0;
		cin >> n >> sub;
		int guarda = 0;
		FI(n){
			int aux;
			cin >> aux;
			if(aux%2 != 0){
				if(guarda != 0)
					primos.insert(i);
				guarda = 1;
				cont ++;
			}
		}		
		
		primos.insert(n);

		if(cont == sub){

			cout << "YES\n";

			for(auto it : primos)
				cout << it << " ";
				
			cout << endl;
		}else if(cont > sub){
			if((cont-sub)%2 == 0 ){
				cout << "YES\n";
				int conta = cont-sub;
				int i = 0;

				for(auto it : primos){	

					if(i < conta){
						i++;
						continue;
					}

					cout << it << " ";
				}	
				cout << endl;
			}else{
				cout << "NO\n";
			}
						
	
		}else if(cont < sub){
			cout << "NO\n";
		}

		primos.clear();
		seq.clear();

	}
	

}
