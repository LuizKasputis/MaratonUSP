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

vector <int> aqui;

int main (){
    int n;
    cin >> n;
    bool oddMa = false, oddMin = false;

    for(int i = 0 ; i < n ; i++){
        int aux;
        cin >> aux;

        if(aux % 2 == 0){
            aqui.pb(aux/2);
        }else{
            if( aux < 0){
                if(oddMa == false){
                    aqui.pb(aux/2);
                    oddMa = true;
                }else{
                    aqui.pb(aux/2-1);
                    oddMa = false;
                }
            }else{
                if(oddMin == false){
                    aqui.pb(aux/2);
                    oddMin = true;
                }else{
                    aqui.pb(aux/2+1);
                    oddMin = false;
                }
            }
        }
    }

    for(int i = 0 ; i < aqui.size() ; i++){
        cout << aqui[i] << endl;
    }

}