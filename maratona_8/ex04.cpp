#include <bits/stdc++.h>
using namespace std;
#define ll long long

int v[1001100];
map<ll,ll> mpp;
vector <ll> lista;
int main (){
	int n;
	ll ans = 0, last = -1;
	cin >> n;

	for(int i = 0; i < n; i++){
		int aux;
		scanf("%d", &aux);
		mpp[aux]++;	
	}	

	auto it  = mpp.begin();
		
	while(it != mpp.end()){
		ll pos = it->first;
		ll quant = it->second;
		quant--;
		if(quant % 2){
			ans++;
			mpp[pos+1] += (quant+1)/2;	
		}else if(quant > 0){
			mpp[pos+1] += quant/2;
		}
		
		lista.push_back(pos);
		it++;
	}

	for(int i = 0 ; i < lista.size() ; i++){
    		ll cur = lista[i];
    		ans += (cur-last-1);
    		last = cur;
   	 }
	
	printf("%lld\n", ans);

}
