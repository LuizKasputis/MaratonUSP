#include <bits/stdc++.h>
using namespace std;

int mark[40];

int fatorial(int i){
	if(i == 1 || i == 0)
		return 1;
	return fatorial(i-1)*(i);
}

int main (){
	int t;
	
	ios_base::sync_with_stdio(false);


	cin >> t;
	while(t--){
		int tam;
		string s;

		cin >> tam;
		cin >> s;

		for(int i = 0 ; i < tam ; i++)
			mark[s[i] - 'a']++;

	//	for(int i =0 ; i < 5 ; i++)	
	//		cout << mark[i] << endl;	
		
		int contI = 0;

		for(int i = 0 ; i  < 30 ; i++)
		       if(mark[i] % 2 != 0)
		       		contI++;
		
//		printf("contI %d\n", contI);
		
		if(contI > 1){
			printf("0\n");		
			for(int i = 0 ; i<= 30 ; i++)
			mark[i] = 0;	
			continue;
		}

		int res = fatorial(tam/2);
		
//		printf("res = %lld\n", res);
		
		for(int i = 0; i < 30 ; i++){
			res /= fatorial(mark[i]/2);
	//		cout << "res = "<< res << endl;
		}

		cout << res << "\n";

		
		for(int i = 0 ; i<= 30 ; i++)
			mark[i] = 0;
	}
}
