#include <bits/stdc++.h>
using namespace std;

queue <pair <int,int> > q;

int mark[1100];

int main (){
	int n;

	cin >> n;

	for(int i = 0 ; i < 7; i++){
		int aux;
		cin >> aux;
		if(aux > 0)	
			q.push(make_pair(aux,i+1));
	}

	int cont = 0;

	while(true){
		pair <int,int> a = q.front();
		
		int num = a.first;
		int dia = a.second;
		
		n -= num;
		
		if(n <= 0){
			printf("%d\n", dia);	
			return 0;
		}
		
		q.push(a);
		q.pop();
	}

}
