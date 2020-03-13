#include <bits/stdc++.h>
using namespace std;

int main (){
	int n ;
	string s;
	cin >> n;
	while(n--){
		int num;
		cin >> num;
		cin >> s;
		int i = 0;
		int j = s.size() - 1;
		int ok = 1;
		while(i < j && ok == 1){
			ok = 0;
			if(s[i] + 1 == s[j] - 1)
				ok = 1;
			else if(s[i] + 1 == s[j] + 1)
				ok = 1;
			else if(s[i] - 1 == s[j] - 1)
				ok = 1;
			else if(s[i] - 1 == s[j] + 1)
				ok = 1;
			i++;
			j--;
		}
		if(ok == 1)
			printf("YES\n");
		else
			printf("NO\n");
		
	}
}
