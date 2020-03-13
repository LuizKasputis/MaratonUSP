#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int MOD = 998244353;
// Número de coluas, número de componentes e Estado da ultima coluna BB/BP/PB/PP

ll memo[1005][2005][4];
int n, k;


void solve(){
	
	for(int i = 2 ; i <= n ; i++){
		//PERCORRER O DOBRO
		for(int j = 1 ; j <= i * 2  ; j++){
			memo[i][j][0] = (memo[i-1][j][0] +   memo[i-1][j][1]   + memo[i-1][j][2]   + memo[i-1][j-1][3]) % MOD;
			memo[i][j][1] = (memo[i-1][j-1][0] + memo[i-1][j][1]   + memo[i-1][j-2][2] + memo[i-1][j-1][3]) % MOD;	
			memo[i][j][2] = (memo[i-1][j-1][0] + memo[i-1][j-2][1] + memo[i-1][j][2]   + memo[i-1][j-1][3]) % MOD;
			memo[i][j][3] = (memo[i-1][j-1][0] + memo[i-1][j][1]   + memo[i-1][j][2]   + memo[i-1][j][3]) % MOD;
			
		}
		
	}

}

int main (){
	cin >> n >> k;
	
	memo[1][1][0] = 1; //Branco e Branco
	memo[1][2][1] = 1; // Branco e preto
	memo[1][2][2] = 1; //Preto e Branco
	memo[1][1][3] = 1; //Preto e preto

	solve();

	printf("%lld", (memo[n][k][0] + memo[n][k][1] + memo[n][k][2] + memo[n][k][3]) % MOD);

}

