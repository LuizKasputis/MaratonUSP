#include <bits/stdc++.h>

using namespace std;
#define MAX 10000100
#define ll long long int

ll bit[MAX], n;
int a[MAX], b[MAX];
map <int,int> mp;
map <int,int> aux;

void uptade(int x, int i){

	for(; i <= n ; i += i&-i)
		bit[i] += x;

}


ll soma (int i ){
	ll sum = 0;

	for(; i > 0 ; i -= i&-i)
		sum += bit[i];

	return sum;

}


int main (){

	int t, aux;

	cin >> t;
	
	while(t--){
		
		cin >> n;

		for(int i = 0 ; i < n ; i++)
			cin >> a[i];
	
		for(int i = 0 ; i < n ; i++)
			b[i] = a[i];


		sort(b, b+n);
		int cont = 1;
		for(int i = 0 ; i < n ; i++)
			mp[b[i]] = cont++;

		for(int i = 0 ; i < n ; i++){
			if(aux[a[i]] % 2 == 0){

			}else{
				a[i] = mp[a[i]];
			}
		}
		

		ll inv = 0;
		for(int i = n - 1 ; i >= 0 ; i--){
			inv += soma(a[i] - 1);	
			uptade(1, a[i]);
		}
		mp.clear();
		for(int i = 0 ; i <= n ; i++)
			bit[i] = a[i] = b[i] = 0;
		cout << inv << endl;
	}	


}
