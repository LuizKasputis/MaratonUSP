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
#define MAXN 1001000



int main (){
    int n;

    cin >> n;
    string s;
    cin >> s;
    
    int a = 0, b = 0;

    FI(n){

        if(i + 1 < n && int(s[i] - 'a') > int(s[i+1] - 'a')){
            a = i+1;
            b = i+2;
            break;
        }

    }

    if(a != 0 && b != 0){
        cout << "YES" << endl;
        cout << a << " " << b << endl;
    }else{
        cout << "NO" << endl;
    }

}

