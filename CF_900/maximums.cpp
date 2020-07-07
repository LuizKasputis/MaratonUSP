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
#define MAXN 300100

ll v[MAXN], ans[MAXN];

int main (){

    int n;
    ll maior = 0;


    cin >> n;

    for(int i = 0 ; i < n ; i++){

        cin >> v[i];
        
        if( i == 0){
            maior = ans[i] = v[i];
        }else{
            ans[i] = maior + v[i];
            maior = max(maior, ans[i]);
        }

    }

    for(int i = 0 ; i < n ; i++){
        cout << ans[i] << " ";
    }
    cout << endl;


}