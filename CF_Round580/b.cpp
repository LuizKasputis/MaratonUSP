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

int neg, pos, zero;

ll tneg, tpos;

int main (){
	int aux, n;

	cin >> n;

	for(int i = 0 ; i < n ; i++){
  		cin >> aux;
		
		if(aux > 0){
			tpos += aux - 1;
			pos ++;
		}
	
		if(aux < 0){
			tneg += -aux - 1;
			neg++;
		} 
 		if(aux == 0){
			zero++;
		}
	}

	if(neg%2 == 0){
		cout << tneg + tpos + zero << endl;
		return 0;
	}else{
		if(zero == 0){
			cout << tneg + tpos + 2 << endl;
			return 0;
		}else{
			cout << tneg + tpos + zero << endl;
			return 0;
		}
	}

} 
