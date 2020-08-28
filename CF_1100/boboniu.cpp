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

int ma[120][120];

int main (){
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    cout << x << " " << y << endl;
    ma[x][y] = 1;

    bool first = true;
    int aux = 1;

    for(int i = 1 ; i <= n ; i++){
        
        if(first && ma[i][y] != 1){
            ma[i][y] = 1;
            cout << i << " " << y << endl;
        }
        
        first = false;

        if(aux != m){

            if(aux != 1){
                cout << i << " " << aux << endl; 
                ma[i][aux] = 1;
            }

            for(int j = 1 ; j <= m ; j++){

                if(ma[i][j] == 1){
                    continue;
                }
                ma[i][j] = 1;
                cout << i << " " << j << endl;
                aux = j;
            }
        }else{
            for(int j = aux ; j > 0 ; j--){

                if(ma[i][j] == 1){
                    continue;
                }
                ma[i][j] = 1;
                cout << i << " " << j << endl;
                aux = j;

            }
        }
        
    }


}