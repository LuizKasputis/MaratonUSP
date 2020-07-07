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

map<string,int> aux;
vector<int> adj[MAXN];
int maior;

void dfs(int next, int val){

    maior = max(maior, val);

    for(int i = 0 ; i < adj[next].size() ; i++){
        // cout << next << " " << adj[next][i] << endl;
        dfs(adj[next][i], val+1);
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= 2*n ; i+=2){
        string palavra1, palavra2, lixo;
        cin >> palavra1 >> lixo >> palavra2;
        transform(palavra1.begin(), palavra1.end(), palavra1.begin(), ::tolower);
        transform(palavra2.begin(), palavra2.end(), palavra2.begin(), ::tolower);
        if(!aux[palavra1]){
            aux[palavra1] = i;
        }
        if(!aux[palavra2]){
            aux[palavra2] = i+1;
        }
        adj[aux[palavra1]].push_back(aux[palavra2]);
    }

    for(auto it : aux){
        // cout << it.second << endl;
        dfs(it.second, 1);
    }

    cout << maior << endl;
}