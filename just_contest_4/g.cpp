#include <bits/stdc++.h>
using namespace std;
#define pp pair<int,int>

pp v[1000100];
pp a[1000100];
int mark [1000100];

int main (){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, t;
	cin >> t;
	while(t--){

		cin >> n;

		for(int i = 0; i < n; i++){
			int aux;
			cin >> aux;
			v[i] = make_pair(aux, mark[aux]+1);
			mark[aux]++;
			a[i].first = v[i].first;
			a[i].second = v[i].second;
		}

		int cont  = 0;

		sort(a, a+n);

		for(int i = 1; i < n-1 ; i++){
			if(v[i].first == a[i].first && v[i].second == a[i].second)
				cont++;
		}
		
		for(int i = 0 ; i < 1000001 ; i++){
			mark[i] = 0;	
			a[i].first = 0;
			a[i].second = 0;
			v[i].first = 0;
			v[i].second = 0;		
		}


		printf("%d\n", cont);
	}
}
