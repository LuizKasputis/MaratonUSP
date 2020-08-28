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

vector <int> par, impar;

int main (){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int tira = n - 1;
        for(int i = 0 ; i < 2*n ; i++){
            int aux;
            cin >> aux;
            if(tira == 0){
                continue;
            }

            if(aux % 2 == 0){
                par.pb(i+1);
                if(par.size() == 2){
                    cout << par[0] << " " << par[1] << endl;
                    tira--;
                    par.clear();
                }
            }else{
                impar.pb(i+1);
                if(impar.size() == 2){
                    cout << impar[0] << " " << impar[1] << endl;
                    tira--;
                    impar.clear();
                }

            }

        }
        par.clear(), impar.clear();
    }
}