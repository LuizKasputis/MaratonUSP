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
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define debugv(v) for(auto x : v)cout << x << endl;
#define MAXN 100100

int v[10], m[10], p[10], s[10];

void seta(string s){
	if(s[1] == 'm'){
		m[s[0] - '0'] ++;
	}else if(s[1] == 'p'){
		p[s[0] - '0'] ++;
	}else{
		s[s[0] - '0'] ++;
	}
}


int main (){
	string s;
	cin >> s ;
	v[s[0] - '0']++;
	seta(s);	

	cin >> s ;
	v[s[0] - '0']++;
	seta(s);

	cin >> s ;
	v[s[0] - '0']++;
	seta(s);


	int cont = 2;
	for(int i = 0 ; i <= 9 ; i++){
		if(v[i] == 2)
			cont --;	
		else if(v[i] == 3)
			cont -= 2;
	}

	int mark = 0;
	int contn = 2;
	for(int i = 0 ; i < 10 ; i++){

		if(m[i] >= 1 && mark >= 0){
			contn --;
			mark = 2;
		}
		mark--;		
	}

	mark = 2;
	int contp = 2;
	for(int i = 0 ; i < 10 ; i++){

		if(m[i] >= 1 && mark >= 0){
			contp --;
			mark = 2;
		}
		mark--;		
	}

	mark = 2;
	int conts = 2;
	for(int i = 0 ; i < 10 ; i++){

		if(m[i] >= 1 && mark >= 0){
			conts --;
			mark = 2;
		}
		mark--;		
	}


	cout << min({cont,conts,contn,contp}) << endl;

} 
