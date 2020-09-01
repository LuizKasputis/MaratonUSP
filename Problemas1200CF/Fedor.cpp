#include <bits/stdc++.h>
using namespace std;

int v[1020];

int main(){
	int n, m, k;

	cin >> n >> m >> k;
	
	for(int i = 0 ; i <= m ; i++)
		cin >> v[i];

	int total = 0;

	for(int i = 0 ; i < m ; i++){

		int dif = 0;
		
		for(int j = 0 ; j <  n ; j++)
			if( (v[i]&(1<<j)) != (v[m]&(1<<j)) )
				dif++;

//		cout << dif << endl;	

		if(dif <=  k)		
			total++;
	}
	cout << total << endl;


}
