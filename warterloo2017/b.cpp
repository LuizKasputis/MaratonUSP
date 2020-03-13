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
#define MAXN 1001000


pii v[6];
int conta[9];

vector<pii> cts;

void verifica(){
	bool par1 = false, par2 = false, kind3 = false, kind4 = false;
	bool flush = true;
	bool str = true;
	map<int, int> mark;
	int naipe = v[0].se;
	int i = 0;

	sort(v, v+5);

	for(auto it : v){
		if(i < 4 && v[i+1].fi  != v[i].fi + 1)
			str = false;
		i++;
		if(it.se != naipe)
			flush = false;
		mark[it.fi]++;
		//cout << it.se << "    " << naipe << endl;

	}
	for(auto it : mark){

		if(it.se == 2){
			if(par1 == true){
				par2 = true;
			}
			par1 = true;
		}

		if(it.se == 3)
			kind3 = true;

		if(it.se == 4)
			kind4 = true;
	}

	if(str && flush){
		conta[1]++;
		return;
	}	

	if(kind4){
		conta[2]++;
		return;
	}	
	
	if(kind3 && par1){
		conta[3]++;
		return;
	}	

	if(flush){
		conta[4]++;
		return;
	}
	
	if(str){
		conta[5]++;
		return;
	}

	if(kind3){
		conta[6]++;
		return;
	}

	if(par2){
		conta[7]++;
		return;
	}

	if(par1){
		conta[8]++;
		return;
	}

	conta[9]++;
	
	return;
}

int main (){
	int a, b;
	int r1,r2,s1,s2;


	cin >> a >> b;
	cin >> r1 >> s1 >> r2 >> s2;
	v[0] = mp(r1,s1);
	v[1] = mp(r2,s2);
	
	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++){
			if (i == r1 && b == s1)
				continue;
			if (i == r2 && b == s2)
				continue;
			cts.pb(mp(i, j));
		}

	for (int i = 0; i < cts.size(); i++){
		v[2] = mp(cts[i].fi, cts[i].se);
		for (int j = i+1; j < cts.size(); j++){
			v[3] = mp(cts[j].fi, cts[j].se);
			for (int k = j+1; k < cts.size(); k++){
				v[4] = mp(cts[k].fi, cts[k].se);
				cout << v[2].fi << " " << v[2].se << "--" << v[3].fi << " " << v[3].se << "--" << v[4].fi << " " << v[4].se << endl;
				verifica();
			}
		}
	}

	for(int i = 1 ; i <= 9 ; i++)
		cout << conta[i] << " ";


}








