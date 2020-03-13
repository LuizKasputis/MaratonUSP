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

	
/*	BINARY INDEXED TREE - FENWICK TREE
Data structure that supoport range and update queries, both in O(logn).
For [a, b] interval you have to do query(b) - query(a-1).
Must be index from 1, in the form [1, MAXN].
*/

#define MAXN 1000100
int n;
ll bit[MAXN];

// Initializing tree in O(n)
void update(ll x, int i){
	for (; i <= MAXN; i += i&-i)
		bit[i] += x;
}

void build(){
	for (int i = 1; i <= n; i++){
		int x;
		cin >> x;
		update(x, i);
	}
}

// [1, i] sum query
ll query(int i){
	ll sum = 0;
    for (; i > 0; i -= i&-i) // Subtract last significant bit
    	sum += bit[i];
    return sum;
}

// Sum x on position i


int main (){
	fastio;
	cin >> n;

	build();
	
	int num;
	cin >> num;
	
	char a;
	ll b , c;
	FI(num){
		cin >> a >> b >> c;	
		if(a == 'q'){
			cout << query(c) - query(b - 1) << "\n"; 
		}else{
			update(c,b);
		}	
	}


}
