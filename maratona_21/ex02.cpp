#include <bits/stdc++.h>
using namespace std;

int mp[510][510];
int v[510];

void printa(int n){
	
	printf("TAK\n");

	for(int i = 0 ; i < n ; i++)
		printf("%d ", v[i]);
	
	exit(0);
}

int main (){
	int n, m , i, j, sum = 0;
	scanf("%d %d", &n, &m);

	for(i = 0 ; i < n ; i++)
		for( j = 0 ; j < m ; j++)
			scanf("%d", &mp[i][j]);

	for(int i = 0 ; i < n  ; i++){
		sum ^= mp[i][0];
		v[i] = 1;
	}

	if(sum != 0)
		printa(n);	
	

	for(int i = 0 ; i < n ; i++)
		
		for(int j = 1 ; j < m ; j++)

			if(mp[i][0] != mp[i][j]){
				v[i] = j + 1;
				printa(n);
			}
	

	printf("NIE\n");

}
