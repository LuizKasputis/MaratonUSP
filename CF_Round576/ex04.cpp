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


map <int,int> mapa;
vector <pii> ans;

int main (){
	fastio;
	int n , k, len;

	cin >> n >> k;

	FI(n){
		int aux;
		cin >> aux;
		mapa[aux] ++;
	}

	for(auto it : mapa)
		ans.pb(it);
	

	k = (8*k)/n;
	
	if(k <= 20 ){
		len = 1;
		for(int i = 0 ; i < k ; i++)	
			len *= 2;
	}else{
		len = INF;
	}
	
	int sum = 0;
	
	if(len >= ans.size()){
		cout << 0;
		return 0;
	}


	for(int i = 0 ; i < len ; i++)
		sum +=	ans[i].second;
		

	int res = n - sum;

	for(int i = 0 ; i + len < ans.size() ; i++){
		sum -= ans[i].second;
		sum += ans[i+len].second;
	
		res = min(res , n - sum);			

	}
	cout << res;

}
