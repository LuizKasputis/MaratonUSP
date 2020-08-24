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

vector <int> aux;
map <int,int>  mapinha;

int v[MAXN];

int main (){

    int t;

    cin >> t;

    while(t--){
    
        int n, d, k;
        cin >> n >> d >> k;

        FI(n)
            cin >> v[i];

        int ans = 0, maior = n;

        for(int i = 0 ; i < k ; i++){
            if(!mapinha[v[i]])ans++;
            mapinha[v[i]]++;
        }
        maior = ans;
        for(int i = 1 ; i <= n - k ; i++){

            mapinha[v[i-1]]--;
            if(mapinha[v[i-1]] == 0)ans--;
            
            if(mapinha[v[k+i-1]] == 0)ans++;
            mapinha[v[i+k-1]]++;
        
            maior = min(maior, ans);
        }
        
        mapinha.clear();
        aux.clear();

        cout << maior << endl;
    }

}