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

int main (){

    int t;

    cin >> t;

    while(t--){

        int n ,a , b;
        
        char aux = 'a';

        cin >> n >> a >> b;
        b -= 1;
        int i = 0, j = 0, z = 1;
        while(i < n ){

            printf("%c", aux+j);
            
            if(j < b){
                j++;
            }

            if(a <= z){
                j = 0;
                z = 1;
                i ++;
                continue;
            }

            z++;
            i++;
        }
        cout << endl;

    }

}