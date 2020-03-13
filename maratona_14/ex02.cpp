#include <bits/stdc++.h>
using namespace std;
#define ll long long int

queue <int> res;
map <int, int> mark;

int main (){

	ll num, k;
	
	cin >> num ;
	cin >> k;

	ll cont = 0;
	
	for(int i = 0 ; i < 31 ; i++){
		if( num & ( 1 << i ) ){
			
			mark[1 << i]++;
			if( i != 0)
				res.push(1 << i);
			cont++;	
					
		}
	}			
	
	if( cont > k ){
		printf("NO\n");
		return 0;
	}


	while( cont < k && !res.empty() ){
		
		int pot = res.front();
		res.pop();	
		
		mark[pot]--;
		mark[pot/2] += 2;

		if(pot/2 > 1 ){
			res.push(pot/2);
			res.push(pot/2);
		}

		cont++;
	}
	
	if(cont < k ){
		printf("NO\n");
		return 0;
	}	

	printf("YES\n");

	for(auto it : mark)
		for(int i = 0 ; i < it.second ; i++)
			printf("%d ", it.first);


	cout << "\n" ;
	
}
