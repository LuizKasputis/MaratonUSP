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
#define MAXN 500001

ll v[MAXN];

int main (){
    int t;
    ll j  = 1;
    cin >> t;

    for(ll i = 3 ;  i < MAXN ; i += 2 ){
        v[i] += v[i-2] + 4*j*(i - 1);
        j++;
    }

    while(t--){
        int n;
        cin >> n;
        cout << v[n] << endl;
    }

}