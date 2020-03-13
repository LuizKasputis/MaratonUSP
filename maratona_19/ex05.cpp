#include <bits/stdc++.h>
#define pp pair <int,int>
using namespace std;

map <int,int> mp;
priority_queue <pp> q;

int main (){
	int n , k, aux;
	
	cin >> n >> k;
	
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &aux);
		mp[aux]++;
	}

	for(int i = 0 ; i < 200001 ; i++){
		
		if(mp[i] != 0)
			for(int j = 1 ; j <= mp[i] ; j++)
				q.push({ mp[i]/j , i});
	
	}

	for(int i = 0 ; i < k ; i++){
		cout << q.top().second << " ";
		q.pop();
	}
	printf("\n");
	return 0;

}
