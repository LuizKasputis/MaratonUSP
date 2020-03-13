#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;
	while(t--){
		int c, l;
		cin >> l;
		cin >> c;
		int cont1 = 0, cont2 = 0 ;
		for(int i = 0 ; i < l ; i++){
			string s;
			cin >> s;
			for(int j = 0 ; j < c ; j++){
				if(i == 0 || i  == l - 1 || j == 0 || j == c - 1){
					if( s[j] == '0' )
						cont1++;
				}else{
					if( s[j] == '1' )
						cont2++;		
				}
			}
		}
		if(cont2 >= cont1)
			printf("%d\n", cont1);
		else
			printf("-1\n");
	}
}
