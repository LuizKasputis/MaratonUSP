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

vector <pii> deck;

bool compare(pii a, pii b){
	
	if(a.se > b.se ) return true;
	else if(a.se < b.se) return false;
	
	if(a.fi > b.fi) return true;

	return false;
	
}

int main (){
	int n;

	cin >> n;

	FI(n){
		int a,b;
		cin  >> a >> b;
		deck.pb(mp(a,b));
	}

	sort(deck.begin(), deck.end(), compare);
	
	ll cont = 0;
	ll aux = 0;

	for(auto it : deck ){
		aux += it.se;
		cont += it.fi;
		aux--;
		if(aux < 0 )
			break;
	}

	cout << cont << "\n";
} 
