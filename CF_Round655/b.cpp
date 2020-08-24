#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int 
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define fi first
#define mp makePair
#define se second
#define FI(n) for(int i = 0; i < n; i++)
#define FOR(i,a,n) for (int i=(a);i<(n);++i)
#define debug(x) if(on)cout << x << endl
#define on true
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;
#define MAXN 100100

vector <int> divisores;

int main (){
    fastio;

    int t;
    cin >> t;

    while(t--){
        int n;

        cin >> n;
        
        int raiz = sqrt(n);
        int aux = n;

        if(n % 2 == 0){
            cout << n/2 << " "<< n/2 << endl;
            continue; 
        }

        for(int i = 3 ; i <= raiz; i++){
            while( n % i == 0 ){
                divisores.pb(i);
                n /= i;
            } 
        }

        sort(divisores.begin(), divisores.end());

        if(n == aux){
            cout << aux - 1 << " " << 1 << endl;
        }else{

            int menor = divisores[0];
            int total = aux/divisores[0];

            cout << total*(menor-1) << " " << total*(1) << endl;

        }

        divisores.clear();
    }
}