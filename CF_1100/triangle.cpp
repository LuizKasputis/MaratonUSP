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

ll v[MAXN];

int main (){

    ll total = 0;
    int i = 1, j = 0;
    while(total < INF){
        total += 2*i + j;
        v[j] = total;
        i++, j++;
    }

    int t;

    cin >> t;

    while(t--){
        int n, i = 0, ans = 0;
        cin >> n;

        while(n > 1){
            if(n < v[i]){
                n -= v[i-1];
                ans++;
                i = 0 ;
                continue;
            }
            i++;
        }

        cout << ans << endl;

    }

}