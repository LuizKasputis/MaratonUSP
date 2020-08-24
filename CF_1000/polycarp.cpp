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
#define MAXN 1001000
#define DAYS 100100000

int v[MAXN];

int main (){
    int n;

    cin >> n;

    FI(n)
        cin >> v[i];

    sort(v, v+n);

    ll total = 0, j = 0;
    bool ok = false;

    for(int i = 1; i < DAYS ; i++){

        while(j < n ){
            if( i <= v[j]){
                ok = false;
                break;
            }else{
                ok = true;
                j++;
            }
        }
        j++;

        if( ok ) {
            cout << i - 1 << endl;
            break;
        }else if(j >= n){
            cout << i << endl;
            break;
        }

        ok = false;

    }

}