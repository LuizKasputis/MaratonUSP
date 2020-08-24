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
    int n; 
    string s;

    cin >> n;
    cin >> s;
    
    int total = MAXN;

    for(int i = 0 ; i < n - 3 ; i++){
        
        int op = + min(abs(s[i] - 'A'), 26 - abs(s[i] - 'A')) 
                + min(abs(s[i+1] - 'C'), 26 - abs(s[i+1] - 'C')) 
                + min(abs(s[i+2] - 'T'), 26 - abs(s[i+2] - 'T'))
                + min(abs(s[i+2] - 'G'), 26 - abs(s[i+2] - 'G')); 

        total = min(op,total); 
    }

    cout << total << endl;

}