#include <bits/stdc++.h>
using namespace std;

int v[1010];

int main (){
	int t;
	cin >> t;

	while(t--){
		int n, m;
		cin >> n;
		cin >> m;
		for(int i = 0 ; i < n ; i++){
			cin >> v[i];		
		}
		int ok = 1;
		while(ok == 1){
			ok = 0;
			for(int i = 0 ; i < n ; i++){
					if(v[i] != -1){
						if( i != n - 1){
							if(v[i+1] == -1){

								if(v[i] == m - 1)
									v[i + 1] = 0;
								else
									v[i + 1] = v[i] + 1;

							ok = 1;
							}
						}
						
						if( i != 0){
							if(v[i - 1] == -1){

								if(v[i] != 0)
									v[i - 1] = v[i] - 1;
								else
									v[i - 1] = m - 1;

							ok = 1;	
							}	
						}
					}
				}
		}
		
		for(int i = 0;  i < n ; i++){
			cout << v[i] << " ";
		}
		printf("\n");

	}

}
