#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int 
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define fi first
#define mp make_pair
#define se second
#define FI(n) for(int i = 0; i < n; i++)
#define FOR(i,a,n) for (int i=(a);i<(n);++i)
#define t cout << "TESTE" << endl
#define debug(x) if(on)cout << x << endl
#define on true
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;

queue <char> p;
stack <char> l;
queue <char> o;

int main (){

	fastio;


	int num , balas = 0 , neves = 0;
	string s;
	cin >> s;
	cin >> num ;
	
	for(int i = 0 ; i < s.size() ; i++){

		if(s[i] == '?')
			balas++;
		if(s[i] == '*')
			neves++;
		p.push(s[i]);

	}


	if(s.size() - balas - neves == num){

		for(int i = 0 ; i < s.size() ; i++)
			if(s[i] != '?' && s[i] != '*')
				cout << s[i] ;
	
		cout << endl;
		return 0;
		
	}

	


	if(s.size() - balas - neves < num){

		int precisa = num - (s.size() - balas - neves);
	
		if(neves == 0){
			cout << "Impossible" << endl;
			return 0;
		}
	
		bool ak = true;
		
		for(int i = 0 ; i < s.size() ; i++){
		
			if(s[i] == '*' && ak == true){

				for(int j = 0 ; j < precisa ; j++) 
					o.push(s[i-1]);

				ak = false;
			}else{
				if(s[i] != '?' && s[i] != '*')
					o.push(s[i]);

			}

		}
				

		while(!o.empty()){
			cout << o.front();
			o.pop();
		}
		cout << endl;
		return 0;
	
	}

	int conta, tira;

	if(s.size() - balas - neves > num){	

		conta = 0;
		tira = (s.size() - balas - neves) - num;
		
		for(int i = 0 ; i < s.size() ; i++){
			if((s[i] == '?' || s[i] == '*') && tira != conta){
				s[i - 1] = '?';
				conta++;
			}
	}

	if(tira != conta){
		cout << "Impossible\n" << endl;
		return 0;
	}

	for(int i = 0 ; i < s.size() ; i++){
		if(s[i] != '?' && s[i] != '*')
			cout << s[i] ;
	}

	cout << endl;


	}			

	

}
