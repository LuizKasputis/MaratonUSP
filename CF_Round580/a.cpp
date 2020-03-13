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

int a[110], b[110];

int markA[240], markB[240];

int main (){
	int numA, numB;

	cin >> numA;

	FI(numA){
		int aux;
		cin >> aux;
		markA[aux] = 1;
		a[i] = aux;
	}

	cin >> numB;

	FI(numB){
		int aux;
		cin >> aux;
		markB[aux] = 1;
		b[i] = aux;
	}

	for(int i = 0 ; i < numA ; i++){
		for(int j = 0 ; j < numB ; j++){
			int aux = a[i] + b[j];

			if(markA[aux] == 0 && markB[aux] == 0){
				cout << a[i] << " " << b[j] << endl;
				return 0;
			}
		}
	}

	cout << "-1" << endl;

} 

