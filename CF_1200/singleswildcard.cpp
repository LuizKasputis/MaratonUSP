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

int main (){

    int n , m, i = 0;
    string s, x;

    cin >> n >> m;
    cin >> s >> x;


    bool ok = (n > m + 1)? false : true;

    while(s[i] != '*' && i < n){
        if(s[i] != x[i])
            ok = false;
        i++;   
    }

    i = n-1;
    int j = m-1;

    while(j >= 0 && i >= 0 && s[i] != '*' )
        if(s[i--] != x[j--])
            ok = false;
        if(i<0)
            if(j>=0)
                ok = false;
    
    ok ? cout << "yes" << endl : cout << "no" << endl; 
}