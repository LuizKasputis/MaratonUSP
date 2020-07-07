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
        ll a, b;
        cin >> a >> b;
        if ( a == b ){
            cout << "0" << endl;
            continue;
        }
        if ( b < a )swap(a,b);

        int total = 0;
        if( b % a != 0 ){
            cout << "-1" << endl;
        }else{
            b /= a;
            while( b % 8 == 0) b /= 8, total++;
            while( b % 4 == 0) b /= 4, total++;
            while( b % 2 == 0) b /= 2, total++;
            if(b == 1){
                cout << total << endl;
            }else{
                cout << "-1" << endl;
            }
        }
    }

}