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

vector <int> a(30);

int main (){

    int t;

    cin >> t;

    while(t--){
        string s, x;
        vector <int> a(30);
        cin >> s;
        cin >> x;
        
        for(int i = 0 ; i < s.size() ; i++)
            a[s[i] - 'a']++;
        
        bool ok = false;

        for(int i = 0 ; i < x.size() ; i++){
            vector <int> b(30);
            for(int j = i ; j < x.size() ; j++){
            
                b[x[j] - 'a']++;
                if(b == a) ok = true;
            }
        }

        if(ok )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }

}