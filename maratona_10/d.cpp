#include <bits/stdc++.h>
using namespace std;
#define pp pair<int,int>

int v[200010];
vector <pp> aux;
int memo[200010];
int adj[200010];
int n;

bool cmp(const pp &l,const pp &r) {
    return l.first < r.first;
}


void pd(){

	for(int i = n - 1; i >= 0 ; i--){
		
		int ind = lower_bound(aux.begin(), aux.end(), v[i] - 1, cmp) - aux.begin();
		
		if(ind != aux.end())
			continue;
		
		while(aux[ind].first == v[i] - 1){

			int j = aux[ind].second;
			ind++;
			
			if(j < i)
				continue;

			if(memo[i] < memo[j] + 1){
	
				adj[i] = j;	
					
				memo[i] = memo[j] + 1;
			}


		}

		
	}

}
int main (){
	cin >> n;
	for(int i = 0; i < n ; i++){
		int num;
		cin >> num;
		v[i] = num;
		aux.push_back(make_pair(num , i));
	}
	
	int maior = 0;

	sort(aux.begin() , aux.end(), cmp);

	pd();

//	for(int i = 0 ; i < n ; i++)
//		printf("%d ", memo[i]);

	int id = 0;

	for(int i = 0;  i < n ; i++){
		if(memo[i] > maior){
			maior = memo[i];
			id = i;
		}
	}
	
	printf("%d\n", maior + 1);
	printf("%d ", id+1);

	int auxi = adj[id];
	while(auxi != 0){
		printf("%d ", auxi+1);
		auxi = adj[auxi];
	}


	printf("\n");

}	
