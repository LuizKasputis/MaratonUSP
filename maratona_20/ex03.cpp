#include <bits/stdc++.h>
using namespace std;
// TO TILTADO CARAAAAAAAAAAAAAAAAAAAAAAAAAA:W
// weadasdasdsdgsagodsfgpinsfdnadsf
int v[7];

int main (){
	int n, num;
	v[0] = 1; v[1] = 2; v[2] = 3; v[4] = 5; v[5] = 7 ; v[6] = 11;
	cin >> n;
	
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &num);
		if(num < 12){
			int ok = 1;
			for(int i = 0 ; i < 7 ; i++){
				if(num == v[i]){
					printf("-1\n");
					ok = 0;
					break;
				}
			}
		
			if(ok == 1 && num != 8 && num != 10)
				printf("1\n");
			else if( num == 8 || num == 10)
				printf("2\n");
			
			continue;
				
		
		}
		if(num % 4 == 0){
			printf("%d\n", num/4);
		}else if(num % 4 == 1){
			printf("%d\n", 1 + (num - 9)/4);
		}else if(num % 4 == 2){
			printf("%d\n", 1 + (num - 6)/4);
		}else{
			printf("%d\n", 2 + (num-6-9)/4);
		}
	}

}
