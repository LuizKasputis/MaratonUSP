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
    int t;

    cin >> t;

    while(t--){
        int a, b , c, r;
        cin >> a >> b >> c >> r;

        if( a > b) swap(a,b);
        
        int total = 0;
        
        total = abs(b - a);
        
        int l = c - r;
        int ri = c + r;

        int lf = max(a,l);
        int rf = min(b,ri);

        
        cout << b-a - max(0, rf -lf) << endl;

    }

}