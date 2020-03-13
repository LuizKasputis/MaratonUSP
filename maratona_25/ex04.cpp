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

const ll INF1=10000000000000010LL;

ll a[100010], lazy[400010];

struct node{

	ll sum , quadrado;

}seg[400010];


void build(int node, int l , int r){

	if(l == r){
		seg.sum = a[l];
		seg.quadrado = a[l]*a[l];
		lazy[node] = 0;
		return;
	}

	int mid = (l + r)/2;

	build(node*2, l, mid);
	build(node*2 + 1, mid + 1 , r);

	lazy[node] = 0;

	t[node].sum = t[2*node].sum + t[2*node + 1].sum;
	t[node].quadrado = t[2*node].quadrado + t[2*node + 1].quadrado;

	return;

}

void unlazy(int node , int l , int r, ){
	
	if(lazy[node]){
		
		if(lazy[node] < 0 ){
		
			seg[node].sum = (r - l + 1)*(-lazy[node]);
			seg[node].quadrado = (r - l + 1)*(lazy[node]*lazy[node]);

			if(l != r){
				lazy[2*node] = lazy[2*node +1] = lazy[node];

			lazy[node] = 0;
		}else{
		
			seg[node].quadrado += (seg[node].sum + (r-l+1)*lazy[node])*(seg[node].sum + (r-l+1)*lazy[node]) ;
			seg[node].quadrado -= seg[node].sum*seg[node].sum;
			seg[node].quadrado -= (2*(r-l)*seg[node].sum*lazy[node]  + (r-l+1)*(r-l)*lazy[node]*lazy[node] )
			seg[node].sum += (r-l+1)*lazy[node];

			if(l != r ){
				
				if(lazy[2*node] >= 0)
					lazy[2*node] += lazy[node];
				else
					lazy[2*node] -= lazy[node];

				if(lazy[2*node + 1] >= 0)
					lazy[2*node + 1] += lazy[node];
				else				
					lazy[2*node + 1] -= lazy[node];
			}

		}
		
		

	}


}


ll query(int node, int l, int r, int a, int b){


	unlazy(node, l , r);

		 
	
}
