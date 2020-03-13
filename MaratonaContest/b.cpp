#include <bits/stdc++.h>
using namespace std;


#define pii pair<int, int>


int n, T;
vector<int> v_x;
vector<int> v_y;
int main(){

	scanf("%d", &T);
	int a, b;
	while(T--){

		scanf("%d", &n);

		for(int rec = 0; rec < n; rec++){
			for(int i = 0; i < 4; i++){
				scanf("%d %d", &a, &b);
				v_x.push_back(a);
				v_y.push_back(b);
			}
		}


		sort(v_x.begin(), v_x.end());
		sort(v_y.begin(), v_y.end());

		//printf("%d %d\n", max.first, max.second);
		int area = (v_x[n*(4) - 1] - v_x[0])*(v_y[n*(4) - 1] - v_y[0]);
		printf("%d\n", area);
		v_x.clear();
		v_y.clear();

	}
return 0;
}