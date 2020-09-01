#include <bits/stdc++.h>
using namespace std;

int t, a, b, p, apont;
string s;

pair <float, int > v[100100];
pair <int, int> total[100100];

bool maior(pair<float,int> a, pair<float,int> b ){
	if(a.first>=b.first) return true;
	return false;
}


int main (){

	cin >> t;

	while(t--){
	
		cin >> a >> b >> p;

		cin >> s;
	
		for(int i = 0 ; i < s.length() ; i++){
			
			for(int j = i + 1 ; j < s.length() ; j++){
				
				if(s[i] != s[j] || j + 1 == s.length()){
					
					if(s[i] == 'A'){
						v[apont] = {(1.0*j-1.0*i)/a, apont};
						total[apont] = {a, j-i};
					}else{
						v[apont] = {(1.0*j-1.0*i)/b, apont};
						total[apont] = {b, j-i};
					}
					
				 	apont++;
					i = j - 1;

					break;
						
				}

			}		
			
		}
	
		sort(v, v+apont, maior );
	
		for(int i = 0 ; i < s.size() ; i++)
			cout << v[i].first << endl;
		
		int andar = s.length();

		for(int i = 0 ; i < apont ; i++){
			
			int valor = p - total[v[i].second].first ;
			
			if( valor  < 0 )
				break;

			p -= total[v[i].second].first; 
		
			andar -= total[v[i].second].second;
		}
		
		if(andar <= 0)
			cout << "1" << endl;
		else
			cout << andar+1 << endl;
		
		apont = 0;
	}

}
