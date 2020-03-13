#include <bits/stdc++.h>
using namespace std;

set <pair <int, int> > neg;
set <pair <int, int> > pos;

int main (){
	int n, aux, apl ;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> aux;
		cin >> apl;
		if(aux < 0)
			neg.insert({abs(aux),apl});	
		else
			pos.insert({abs(aux),apl});	
	}
	int totalD = 0;
	int totalE = 0;

	set <pair<int,int>> :: iterator et = neg.begin();
	set <pair<int,int>> :: iterator it = pos.begin();

	if(it == pos.end()){
		printf("%d\n",et->second);
		return 0;
	}if(et == neg.end()){
		printf("%d\n", it->second);
		return 0;
	}
	int ok = 0;
	while(et != neg.end() && it != pos.end()){
		if(ok %2 == 0){
			if(ok != 0)
				it++;
			totalD += et->second;
		}else{
			totalD += it->second;
			et++;
		}
		ok++;
	}

	et = neg.begin();
	it = pos.begin();

	ok = 0;
	while(et != neg.end() && it != pos.end()){
		if(ok %2 == 0){
			if(ok != 0)
				et++;
			totalE += it->second;
		}else{
			totalE += et->second;
			it++;
		}
		ok++;
	}

	printf("%d\n", max(totalD,totalE));

}
