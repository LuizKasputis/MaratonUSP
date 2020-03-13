#include <bits/stdc++.h>
using namespace std;

vector <int> p1;
vector <int> p2;

int main(){
	int n;
	cin >> n;
	if(n > 2){
		int ok  = 0, aux1 = n, aux2 = n-1, total = 0;
		while(n >= 1){
			if(ok%2 == 0){
				total= total + n + (n-1);
				p1.push_back(n);
				if(n-1 != 0){
					p2.push_back(n-1);
				}
			}else{
				total= total + n + (n-1);
				p2.push_back(n);
				if(n-1 != 0){
					p1.push_back(n-1);
				}
			}
			ok+=1;
			n-=2;
		}
		total= total - aux1 - aux2;
		if(total%2 == 0){
			printf("1\n");
			printf("%d ", p1.size());
			for(auto it:p1){
				printf("%d ", it);
			}
		}else{	
			printf("0\n");
			printf("%d ", p1.size());	
			for(auto it:p1){
				printf("%d ", it);
			}

		}

	}else{
		printf("1\n");
		printf("1 1\n");
	}
}
