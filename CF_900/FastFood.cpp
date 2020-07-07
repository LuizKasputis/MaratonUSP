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

int total;

bool subtrai(int val){
    return val  >= 0 ;
}

int main (){

    int t;

    cin >> t;
    
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(subtrai(a-1)){
            a--;
            total++ ;
        }  
        if(subtrai(b-1)){
            b--;
            total++ ;
        } 
       if(subtrai(c-1)){
            c--;
            total++ ;
        } 

        if(subtrai(a-1) && subtrai(b-1) && !( a == 1 && b == 1 && c >= 2)){
             total++ ;
             a--;
             b--;
        } 
        if(subtrai(b-1) && subtrai(c-1)){
             total++ ;
             c--;
             b--;
        } 

        if(subtrai(c-1) && subtrai(a-1)){
             total++ ;
             a--;
             c--;
        } 

        if(subtrai(a-1) && subtrai(b-1) && subtrai(c-1)){
             total++ ;
             a--;
             b--;
             c--;
        } 
        
        cout << total << endl;
        total = 0;
    }

}