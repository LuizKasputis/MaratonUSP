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

vector <int> a, b;

bool compara (int a, int b){
    return a > b;
}

int main (){
    int n;

    cin >> n;

    FI(2*n){
        int aux;
        cin >> aux;
        a.pb(aux);
        b.pb(aux);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), compara);

    bool ok = false;
    if(a == b){
        for(int i = 0 ; i < n && !ok; i++){
            if(a[i] != b[i]){
                int aux = a[i];
                a[i] = b[i];
                b[i] = aux;
                ok = true;
            }
        }

        if(ok){
            for(auto it: a){
                cout << it << " ";
            }
            cout << endl;
        }else{
            cout << "-1" << endl;
        }

    }else{
        for(auto it: a){
            cout << it << " ";
        }
        cout << endl;
    }


}