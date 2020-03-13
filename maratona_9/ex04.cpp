#include <bits/stdc++.h>
using namespace std;

vector <int> res;

int main (){
	int n, k;
	cin >> n >> k;
	
	int l = 1;
	int r = n;
	int ok = 0;

	while(k--){
		if(ok % 2 == 0){
			res.push_back(l);
			l++;
			if( k == 0)
				for(int i = l ; i <= r ; i++)
					res.push_back(i);
			ok++;
		}else{
			res.push_back(r);
			r--;
			if(k == 0)
				for(int i = r ; i >= l ; i--)
					res.push_back(i);
			ok++;
		}	

	}

	for(auto it : res)
		printf("%d ", it);
	printf("\n");
}
