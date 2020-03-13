#include <bits/stdc++.h>
using namespace std;

int main(){
	string s1, s2, sf;
	int T;
	set<string> meuset;
	scanf("%d", &T);
	while(T--){
		cin >> s1 >> s2;
		for (int i = 1; i <= s1.size(); i++){
			for (int j = 0; j < i; j++)
				sf.push_back(s1[j]);
			for (int k = 1; k <= s2.size(); k++){
				for (int j = 0; j < k; j++)
					sf.push_back(s2[j]);
				for (int j = i; j < s1.size(); j++)
					sf.push_back(s1[j]);
				for (int j = k; j < s2.size(); j++)
					sf.push_back(s2[j]);
				meuset.insert(sf);
				for (int j = sf.size()-1; j >= i; j--)
					sf.pop_back();
			}
			sf.clear();
		}

		sf.clear();

		for (int i = 1; i <= s2.size(); i++){
			for (int j = 0; j < i; j++)
				sf.push_back(s2[j]);
			for (int k = 1; k <= s1.size(); k++){
				for (int j = 0; j < k; j++)
					sf.push_back(s1[j]);
				for (int j = i; j < s2.size(); j++)
					sf.push_back(s2[j]);
				for (int j = k; j < s1.size(); j++)
					sf.push_back(s1[j]);
				meuset.insert(sf);
				for (int j = sf.size()-1; j >= i; j--)
					sf.pop_back();
			}
			sf.clear();
		}

		for (auto p = meuset.begin(); p != meuset.end(); p++)
			cout << *p << "\n";
		printf("\n");
		
		sf.clear();
		meuset.clear();
	}
	return 0;
}