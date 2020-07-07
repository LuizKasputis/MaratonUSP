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


int a[MAXN];

int main (){
    int t;

    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        for(int i = 0 ; i < n ; i++)
            cin >> a[i];

        int impar = 0;
        int par = 0;

        for(int i = 0 ; i < n ; i++){
            if(i % 2 == 0 && a[i] % 2 == 1){
                impar++;
            }else if(i % 2 == 1 && a[i] % 2 == 0){
                par++;
            }
        }

        if(par == impar ){
            cout << par << endl;
        }else{
            cout << "-1" << endl;
        }

    }

}