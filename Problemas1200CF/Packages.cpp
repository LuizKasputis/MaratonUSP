#include <bits/stdc++.h>
using namespace std;

vector <pair<int,int>> grid;
vector <char> palavra;


int main (){
	int t;
	
	cin >> t;

	while(t--){
		int n;

		cin >> n ;

		grid.clear();
		palavra.clear();	
	
		for(int i = 0 ; i < n ; i++){

			int a, b;
			cin >> a >> b;
			grid.push_back({a,b});

		}

		sort(grid.begin() , grid.end() );

		int x = 0, y = 0, ok = 0;

		for( auto it : grid ){
		
			int R = it.first - x;
			int U = it.second - y;			

			if(R < 0 || U < 0){
				cout << "NO\n";
				ok = 1;
				break;
			}

			for(int i = 0 ; i < R ; i++)
				palavra.push_back('R');

			
			for(int i = 0 ; i < U ; i++) 
				palavra.push_back('U');

			x = it.first;
			y = it.second;
		}
		
		if(ok) continue;

		cout << "YES\n";

		for(auto it : palavra)
			cout << it ;
		

		cout << endl;

	}

}
