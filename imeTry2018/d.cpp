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

double bit[100100];
int n;


void update(double x, int i){
	
	for(; i <= n ; i += i&-i)
		bit[i] += x;
	
}

double sum(int i){
	double sum = 0;

	for(; i > 0 ; i -= i&-i)
		sum += bit[i];

	return sum;		

}

int main (){
	fastio;
	cin >> n;

	FI(n){
		double aux;
		cin >> aux;
		update(aux, i+1);		
	}

	int q;
	cin >> q;
	
	FI(q){
		int a, b;
		double c;
		cin >> a >> b >> c;
		if(a == 1){
			double xd = sum(b) - sum(b-1);
			update(c-xd,b);
		}else{
			double xd = sum(c) - sum(b-1) ;
			printf("%.6f\n", xd/(c-(b-1)));
		}
		

	} 

}
