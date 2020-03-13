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
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;

int v[1000][1000];
int a[100000][15], b[100000][15], n;
int conta, contb;


int main (){
	int n ;

	cin >> n;

	if(n == 1){
		printf("1\n");
		return 0;
	}
	a[0][0] = a[1][1] = 1;
	a[0][1] = a[1][0] = 2;

 
	bool ok = false;
	int m = 2, j, aux, anterior;
	
	conta = 2;
	contb = 0;	

	for(int k = 2 ; k < n ; k++){
	
		if(ok == true){

		conta  = 0;
			for(int i = 0 ; i < contb ; i++){

				if(i == 0)
					aux = 0;
				else
					aux = (k+1)*i;
				
			
				if(i % 2 == 0){

					for(j = 0 ; j < k ; j++)
						a[aux][j] = b[i][j];

					a[aux][j] = k + 1;
				}else{

					for(j = 0 ; j < k  ; j++)
						a[aux][j + 1] = b[i][j];

					a[aux][0] = k + 1;

				}
				bool ant = false;			
				if( i % 2 == 0){
					conta++;
					for(int z = 1 ; z < k + 1 ; z++){
						for(j = 0 ; j < k + 1 ; j++){	

							if(ant){

								a[aux + z][j] = anterior;
								ant = false;	

							}else if(a[aux + z - 1][j + 1] == k + 1){
	
								a[aux + z][j] = k + 1;
								anterior = a[aux + z - 1][j];
								ant = true;

							}else{
								
								a[aux + z][j] = a[aux + z - 1][j];
		
							}
	
						}
		
						conta++;
					}
				}else{
					conta++;
					for(int z = 1; z < k + 1 ; z++){
						for(j = k ; j >= 0 ; j--){
						
							if(ant){

								a[aux + z][j] = anterior;
								ant = false;	

							}else if((j - 1) >= 0 && a[aux + z - 1][j - 1] == k + 1){
	
								a[aux + z][j] = k + 1;
								anterior = a[aux + z - 1][j];
								ant = true;

							}else{
								
								a[aux + z][j] = a[aux + z - 1][j];
		
							}
	
						}
		
						conta++;
					}

				}

			}
			ok = false;	

		}else{
		
 		contb = 0;

		for(int i = 0 ; i < conta ; i++){
				
				if(i == 0)
					aux = 0;
				else
					aux = (k+1)*i;
				
				if(i % 2 == 0){

					for(j = 0 ; j < k ; j++)
						b[aux][j] = a[i][j];

					b[aux][j] = k + 1;
				}else{

					for(j = 0 ; j < k  ; j++)
						b[aux][j + 1] = a[i][j];

					b[aux][0] = k + 1;

				}
				/*printf("PRIMEIRA LINHA\n");
				for(int i = 0 ; i < k + 1 ; i++)
					printf("%d", b[aux][i]);
				cout << endl;
				*/

				bool ant = false;			
				if( i % 2 == 0){
					contb++;
					for(int z = 1; z < k + 1 ; z++){
						for(j = 0 ; j < k + 1 ; j++){
						
							if(ant){

								b[aux + z][j] = anterior;
								ant = false;	

							}else if(b[aux + z - 1][j + 1] == k + 1){
	
								b[aux + z][j] = k + 1;
								anterior = b[aux + z - 1][j];
								ant = true;

							}else{
								
								b[aux + z][j] = b[aux + z - 1][j];
		
							}
	
						}
		
						contb++;
					}
				}else{
					contb++;
					for(int z = 1; z < k + 1 ; z++){
						for(j = k ; j >= 0 ; j--){
						
							if(ant){

								b[z + aux][j] = anterior;
								ant = false;	

							}else if(j - 1 >= 0 && b[z + aux - 1][j - 1] == k + 1){
	
								b[z + aux][j] = k + 1;
								anterior = b[aux + z - 1][j];
								ant = true;

							}else{
								
								b[aux + z][j] = b[aux + z - 1][j];
		
							}
	
						}
		
						contb++;
					}

				}
		

			}

			ok = true;	
		}
		
	

	}
	
	
	if(n % 2 == 0){
		for(int i = 0 ; i < conta ; i++){
			for(j = 0 ; j < n ; j++)
				printf("%d ", a[i][j]);
			printf("\n");
		}
	
	}else{
		for(int i = 0 ; i < contb ; i++){
			for(j = 0 ; j < n ; j++)
				printf("%d ", b[i][j]);
			printf("\n");
		}


	}



		

}
