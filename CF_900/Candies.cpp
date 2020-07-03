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

vector <int> total;

ll expoencial(int indice){
    if(indice == 0){
        return 1;
    }
    return 2*expoencial(indice-1);
}

int main(){

    int t;

    cin >> t;

    
    ll sum = 1, indice = 1;

    while(sum < 20000000000){
        total.pb(sum);
        sum += expoencial(indice);
        indice++;
    }

    while(t--){
        int n;
        cin >> n;
        for(int i = 0 ; i < total.size() ; i++){
            if(n % total[i] == 0 && total[i] != 1){
                cout << n/total[i] << endl;
                break;
            }
        }
    }

}