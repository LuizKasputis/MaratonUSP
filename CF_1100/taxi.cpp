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

int v[10];

int main (){
    int n;
    cin >> n;

    FI(n){
        int aux;
        cin >> aux;
        if(aux == 3){
            v[3] += 4;
            continue;
        }
        v[aux] += aux;
    }
    int total = 0;

    total +=  v[2] / 4;
    total +=  v[3] / 4;
    total +=  v[4] / 4;
    
    int resto_dois = v[2] % 4;
    int resto_um = max(0, v[1] - v[3]/4);


    total += resto_um / 4;
    int resp = resto_um % 4 != 0 || resto_dois != 0 ? ( resto_um % 4 + resto_dois >= 5 ? total + 2 : total + 1 ) : total; 
    cout << resp << endl;
    

}