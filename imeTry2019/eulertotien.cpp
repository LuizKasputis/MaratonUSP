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

bool primo[1000010];
vector <ll> prim;

void crivo(){
	prim.pb(2);
	for(int i = 3 ; i < 1000001 ; i += 2 )
		if(primo[i] == false){
			prim.pb(i);
			for(int j = 2*i ; j < 1000001 ; j += i)
				primo[j] = true;
		}
}



ll euler(ll num){
	ll ans = num;
	for(auto div : prim){
		
		if(div*div > num )
			break;

		if(num % div == 0){
		
			while(num %div == 0)
				num /= div;
				
			ans -= ans/div;

		}
	}
	if(num != 1 )ans -= ans/num;
	return ans;

}


int main (){
	fastio;
	crivo();
	while(true){
		int num = 0;	
		cin >> num;
		if(num == 0)
			break;
		ll sum = 0;
		for(int i = 1 ; i <= num ; i++){
			if(!primo[num]){
				sum += num;
			}else{
				sum += euler(num);
			}
		}

		cout << sum << endl;

	}
}
