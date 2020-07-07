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

int v[MAXN];

int main(){
    fastio;
    int n, m;
    cin >> n >> m;
    FI(n)
        cin >> v[i];
    
    FI(m){
        int l, r, x;
        cin >> l >> r >> x;

        if(x < l || x > r){
            cout << "Yes" << endl;
            continue;
        }

        int count = 0, aux = v[x-1];
        for(int i = l-1 ; i <= r-1 ; i++)
            if(aux > v[i])
                count++;

        if(l + count == x){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}