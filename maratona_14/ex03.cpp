#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll v[110];
vector <ll> p;
int n;

bool mul2(ll x){
	for(int i = 0 ; i < n ; i++)
		if( x * 2 == v[i])
			return true;

	return false;

}

bool div2(ll x){
	
	if(x % 2 != 0)
		return false;

	for(int i = 0 ; i < n ; i++)
		if( x / 2 == v[i])
			return true;

	return false;

}

bool mul3(ll x){
	for(int i = 0 ; i < n ; i++)
		if( x * 3 == v[i])
			return true;

	return false;

}


bool div3(ll x){
	if(x % 3 != 0)
		return false;
	
	for(int i = 0 ; i < n ; i++)
		if( x / 3 == v[i])
			return true;

	return false;

}


int main (){
	cin >> n;

	for(int i = 0 ; i < n ; i ++)
		cin >> v[i];

	for(int i = 0 ; i < n ; i ++){
		ll num = v[i];
		int ok = 0;
		int ak = 0;

		if(div3(num))
			ok ++;
		if(mul3(num))
			ak ++;
		if(mul2(num))
			ok ++;
		if(div2(num))
			ak ++;

		if(ok == 1 && ak == 0)
			p.push_back(num);
	}

	for(int i = 0 ; i < n - 1 ; i++){
		
		ll num = p[p.size() - 1];	
		
		for(int j = 0 ; j < n ; j++){
			
			if(num * 2 == v[j]){
				p.insert(p.end(), v[j]);
				break;
			}
			
			if(num % 3 == 0){
				if(num / 3 == v[j]){
					p.insert(p.end(), v[j]);
					break;
				}
			}
		}

	}

	for(auto it : p )
		cout << it << " ";
	cout << "\n";

	

	



}	
