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

int euclides(int a, int b){
    if(b == 0)
        return a;
    return euclides(b, a%b);
}

int main (){
    int t;
    cin >> t;

    while(t--){
        
        int n, val = 1;
        cin >> n;

        if( n % 2 == 0)
            cout << n/2 << endl;
        else
            if(n == 1)
                cout << 1 << endl;
            else    
                cout << (n -1)/2 << endl; 
    }    
}