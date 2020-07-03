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
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        if ( a == c){
            if( a == b + d){
                cout << "Yes" << endl;
                continue;
            }
        }

        if(a == d){
            if( a == b + c){
                cout << "Yes" << endl;
                continue;
            }
        }  

        if(b == c ){
            if( b == a + d){
                cout << "Yes" << endl;
                continue;
            }
        }

        if( b == d){
            if( b == a + c){
                cout << "Yes" << endl;
                continue;
            }
        }

        cout << "No" << endl;
    }

}