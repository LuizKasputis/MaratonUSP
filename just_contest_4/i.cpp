#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f

int prox[1000010];
int mark[1000010];
int memo[1000010];
int n;

int pdNEW(){
	memo[n] = 0;
	for(int i = n-1 ;  i > 0  ; i--){
		if(prox[i] != -1)
			memo[i] = min(memo[prox[i]] + 1 , memo[i+1] + 1);
		else
			memo[i] = memo[i+1] + 1;	
	}
	return memo[1];
}


int main (){
	int t;

	ios_base::sync_with_stdio(false);
        cin.tie(NULL);

	cin >> t;


	while(t--){
		cin >> n;
		for(int i = 0 ; i <= n ; i++){
			memo[i] = -1;
			prox[i] = -1;
			mark[i] = 0;
		}

		for(int i = 1; i <= n ; i++){
			int aux;
			cin >> aux;
			if(mark[aux] != 0)
		       		prox[mark[aux]] = i;
			mark[aux] = i;	
		}

		printf("%d\n", pdNEW());
		
		for(int i = 0 ; i <= 200009 ; i++){
			mark[i] = 0;
			prox[i] = -1;
		}

	}
}
