#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main (){
	fastio;
	
	char c;
	int n, a, b, x, y;
	x = -1;
	y = -1;	
	cin >> n;


	for(int i = 0 ; i < n ; i++){
		cin >> c >> a >> b;
		if(c == '+'){

			if(a >= b){

				x = max(x, a);
				y = max(y, b);

			}else{
				
				x = max(x, b);
				y = max(y, a);
			}	

		}else if(c == '?'){
			
			if(a >= x && b >= y){
				printf("YES\n");
				continue;
			}

			if(b >= x && a >= y){
				printf("YES\n");
				continue;
			}

			printf("NO\n");

		}
	
	}

}
