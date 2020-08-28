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
        int total = 0;
        int a, b, c, d, e, f;
        
        cin >> a >> b >> c >> d >> e >> f;

        int tira = min(c,e);
        c -= tira;
        e -= tira;
        total += 2*tira;

        /*ADD F*/
        tira = min(f,a);
        f -= tira;
        a -= tira;

        tira = min(f,c);
        f -= tira;
        c -= tira;

        tira = min(f,b);
        f -= tira;
        b -= tira;
        total += -2*tira;


        cout << total << endl;

    }
}