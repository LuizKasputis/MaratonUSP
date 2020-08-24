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

vector <int> a, b;

int main (){
    int t;
    cin >> t;

    while(t--){
        int n;

        cin >> n;

        FI(n){
            int aux;
            cin >> aux;
            a.pb(aux);
            b.pb(aux);
        }
        sort(a.begin(), a.end());

        int total = 0;

        int ini = 0;
        int fim = n-1;

        for(int i = 0 ; i < n ; i++){
            if(a[i] != b[i]) break;
            else ini++;
        }

        for(int i = n-1 ; i >= 0 ; i--){
            if(a[i] != b[i]) break;
            else fim--;
        }


        for(int i = ini ; i < fim ; i++){

            if(a[i] == b[i]){
                total += 2;
                break;
            }

        }


        if(total == 0 && ini < fim){
            cout << "1" << endl;
        }else{
            cout << total << endl;
        }

        a.clear();
        b.clear();

    }

}