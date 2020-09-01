#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

string s;
int ans[27], t;
pair <int,int> v[200100];


int main (){

	fastio;

	cin >> t;

	while(t--){
		
		int n,m;
		
		cin >> m >> n;
		cin >> s;

		for(int i = 0 ; i < s.length() ; i++){
	
			v[i].first = s[i] - 'a';
			v[i].second = 1;
	
		}

		for(int i = 0 ; i < n ; i++){
		
			int aux;
			cin >> aux;
			v[aux-1].second += 1;
		
		}		
			
		int total = 0;
	
		for(int i = m-1 ; i >= 0 ; i--){
	
			if(v[i].second != 1)
				total += v[i].second - 1;	
		
			ans[v[i].first] += 1 + total;	
	
		}

		for(int i = 0 ; i < 26 ; i++){
			cout << ans[i] << " ";
			ans[i] = 0;
		}
	
		cout << endl;
	}

}
