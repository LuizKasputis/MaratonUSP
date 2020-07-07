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

char aux[110][110];

int main (){
    int t;

    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        if(n*m % 2 == 0){
            aux[0][0] = aux[0][1] = aux[1][0] = 'B';
        }else{
            aux[0][0] = 'B';
        }

        for(int i = 0 ; i < n ; i ++){
            for(int j = 0 ; j < m ; j ++){

                if(aux[i][j] == 'B')
                    continue;


                if(j != 0 ){
                    if(aux[i][j-1] == 'B'){
                        aux[i][j] ='W';
                    }else{
                        aux[i][j] = 'B';
                    }
                }else{
                    
                    if(aux[i-1][j] == 'B'){
                        aux[i][j] = 'W';
                    }else{
                        aux[i][j] = 'B';
                    }

                }   

            }
        }

        for(int i = 0 ; i < n ; i ++){
            for(int j = 0 ; j < m ; j ++){

                cout << aux[i][j] ;
                aux[i][j] = '0';

            }
            cout << endl;
        }

    }    
}