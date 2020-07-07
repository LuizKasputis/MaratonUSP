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
#define t cout << "TESTE" << endl
#define debug(x) if(on)cout << x << endl
#define on true
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;
#define MAXN 100100

int main (){
    
    int a, b, c;

    cin >> a >> b >> c;

    int maior = max(a,b);
    int menor = min(a,b);


    if(menor + c <= maior){

        cout << 2*(menor+c) << endl;

    }else{
        int total = maior+menor+c;

        if(total % 2 ==0)
            cout << total << endl;
        else
            cout << total - 1 << endl;

    }



}