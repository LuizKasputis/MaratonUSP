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

int main (){
	string s;


	cin >> s;
	int cont , aux;
	if(s.size() == 1){
		if(s[0] == '0'){
			cout << "0" << endl;
			return 0;
		}
	}	
	for(int i = 0 ; i < s.size(); i++){
		if(s[i] == '1'){
			aux = i;
			break;
		}
	}
//	cout << s.size() << endl;
	
	if(s.size()%2 == 0){
		cout << s.size()/2 << endl;
		return 0;
	}
	
	cont = (s.size() - aux)/2 ;
	
	for(int i = aux+1 ; i < s.size() ; i++)
		if(s[i] == '1'){
			cont++;
			break;
		}

	cout << cont << endl;

}
