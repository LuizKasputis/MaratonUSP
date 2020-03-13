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

ll seg[200010<<2], lazy[200010<<2];
int a[200010];

void build(int node, int l, int r){

	if(l == r){
		seg[node] = a[l]*a[l];
		return;
	}

	int mid = (l+r)/2;
	
	build(2*node, l, mid);
	build(2*node+1, mid + 1, r);
	
	seg[node] = seg[2*node] + seg[2*node + 1];

}

void add_lazy(int id, ll l){
	lazy[id]+=l;
	seg[id]+=l;
}
 
void shift(int id){
	if (!lazy[id]) return ;
	add_lazy(id<<1, lazy[id]);
	add_lazy(id<<1 | 1, lazy[id]);
	lazy[id]=0;
}
 
void update(int id, int tl, int tr, int l, int r, int val){
	if (r<tl || tr<l) return ;
	if (l<=tl && tr<=r){
		add_lazy(id, val);
		return ;
	}
	shift(id);
	int mid=(tl+tr)>>1;
	update(id<<1, tl, mid, l, r, val);
	update(id<<1 | 1, mid+1, tr, l, r, val);
	seg[id]=min(seg[id<<1], seg[id<<1 | 1]);
}

ll query(int node,int a, int b, int l , int r){

	if( r < a || b < l)return INF1;
	if( l <= a && b <= r) return seg[node];

	shift(node);

	int mid = ( a + b)/2;

	return min(query(2*node, a, mid, l, r), query(2*node+1, mid + 1, b , l , r) );

}



int main (){

	int n, q;

	scanf("%d", &n);

	for(int i = 1 ; i <= n ; i++)	
		scanf("%d", &a[i]);	

	build(1, 1 , n);	

	scanf("%d", &q);

	FI(q){
		int l, r, val;
		char aux;

		scanf("%d %d%c", &l, &r, &aux);
		l++;
		r++;
	
		if(aux == '\n'){
		
			if(l > r )
				printf("%lld\n", min(query(1, 1, n, l, n),query(1 , 1, n, 1 , r)) );
			else
				printf("%lld\n", query(1, 1, n, l, r));

		}else{
			scanf("%d", &val);

			if(l > r ){	
				update(1, 1, n, l, n, val);
				update(1, 1, n, 1, r, val);
			}else{
				update(1, 1, n, l, r, val);
			}
		}

	}



} 
