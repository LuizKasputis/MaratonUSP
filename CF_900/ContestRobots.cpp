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

int v[MAXN], x[MAXN];

int main (){

    int n;
    cin >> n;
    int a = 0, b =0, change = 0;

    for (int i = 0 ; i < n ; i++){
        cin >> v[i];
    }

    for (int i = 0 ; i < n ; i++){
        cin >> x[i];
    }


    for(int i = 0 ; i < n ; i++){
        if(v[i] == x[i])
            continue;
        change = 1;
        if(v[i] == 1){
            a++;
        }else {
            b++;
        }
    }


    if(change == 0 || a == 0){
        cout << "-1" << endl;
    }else{
        if(a >= 0 && b == 0){
            cout << "1" << endl;
            return 0;
        }
        cout << 1+b/a << endl;    
    }

}   