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
        int n, m, x, y;
        string s;

        cin >> n >> m >> x >> y;

        y = min(2*x, y);

        int total = 0;

        for(int i = 0 ; i < n ; i++){
            cin >> s;
            for(int j = 0 ; j < m ; j++){
                if(s[j] == '.'){

                    if(j + 1 < m && s[j+1] == '.'){
                        total += y;
                        s[j] = s[j+1] = '*';
                    }else{
                        total += x;
                    }

                }
            }
        } 

        cout << total << endl;

    }
}