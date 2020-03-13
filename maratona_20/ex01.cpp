#include <bits/stdc++.h>
using namespace std;

int v[5050];
vector <int> ans;


int main (){
	int n;
	cin >> n;
	if(n == 1 || n == 2){
		printf("1\n");
		printf("1\n");
		return 0;
	}

	if(n == 3){
		printf("2\n");
		printf("1 3\n");
		return 0;
	}

	for(int i = 1 ; i <= n ; i++)
		v[i] = i;

	if(n%2 == 0){
		printf("%d\n", n);
		for(int i = 0 ; i < n/2 ; i++){
			if(i + 1 == n/2)
				printf("%d ", n );
			else
				printf("%d ", i + 1 );
			printf("%d ", n - (i + 1) );
		}

	}else{
		printf("%d\n", n);
		ans.push_back(n/2+1);
		
		for(int i = 0; i < n/2 ; i++){
			if(i + 1 != n/2)
				ans.push_back(i + 1);
			else
				ans.push_back(n);
			if(i + 1 != n/2)
				ans.push_back(n - (i + 1) );
			else
				ans.push_back(n/2);
		}
		
		for(auto it : ans )
			printf("%d ", it);

	}
}
