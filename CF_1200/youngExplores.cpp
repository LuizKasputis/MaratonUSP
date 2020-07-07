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
#define MAXN 200100

int v[MAXN];

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        FI(n)
            cin >> v[i];
        sort(v, v+n);
        int ans = 0 , ocorrencia = 0;

        for(int i = 0 ; i < n ; i++){
            if(++ocorrencia == v[i]){
                ans++;
                ocorrencia = 0;
            }
        }

        cout << ans << endl;

    }

}