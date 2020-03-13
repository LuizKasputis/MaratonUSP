#include <bits/stdc++.h>

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

using namespace std;

int seg[400100], n, a[100100];


void build(int node, int l, int r){

	if(l == r){
		seg[node] = a[l];
		return;
	}

	int mid;	
	mid = (l + r) / 2;


	build(2*node,l , mid);
	build(2*node + 1, mid + 1 , r);

	seg[node] = min(seg[2*node] , seg[2*node+1]);	



}


int query(int node, int l , int r, int a, int b){

	if(a > r || b < l) return INF;


	if(a <= l && r <= b) return seg[node];

	int mid = (l + r ) / 2;


	return min(query(2*node,l , mid ,a ,b ), query(2*node+1 ,mid+1 ,r ,a ,b ));
}




int main (){
	fastio;
	
	cin >> n;

	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
	}

	build(1 , 1 ,n );

	
	int q;

	cin >> q;

	for(int i = 0 ; i < q ; i++){
		int a, b; 
		cin >> a >> b;
		cout << query(1, 1 , n , a + 1, b + 1) << endl;
	
	
	}


}
