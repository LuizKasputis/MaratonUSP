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

int v[30];

char x[MAXN];
string s;

int main (){
    int t;

    cin >> t;

    while(t--){

        cin >> s;
        

        for(int i = 0 ; i < s.size() ; i++){
            if( x[i] != '*' && s[i] == s[i+1] ){
                x[i] =  x[i+1] = '*';
            }else if(x[i] != '*'){
                x[i] = s[i];
            }
        }

        for(int i = 0 ; i < s.size() ; i++){
            if(x[i] != '*')
                v[x[i] - 'a'] = 1;
            x[i] = ' ';
        }
        
        for(int i = 0 ; i < 30; i++){
           if(v[i] !=0){
               cout << char(i +'a');
           }
            v[i] = 0;
        }
        cout << endl;

    }   
}