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
        int n;
        string s, d;
        cin >> n;
        cin >> s >> d;
        int ok = 0;
        char a, b;

        for(int i = 0 ; i < n ; i++){
            if( s[i] != d[i]){
                if(ok == 0){
                    a = s[i];
                    b = d[i];
                    ok = 1;
                }else if(ok == 1){
                    if(d[i] == b && s[i] == a){
                        ok = 2;
                    }else{
                        ok = 3;
                    }
                }else if(ok == 2){
                    ok = 3;
                }
            }
        }

        if( ok == 0 || ok == 2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }


    }
}