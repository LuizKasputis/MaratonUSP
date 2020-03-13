#include <bits/stdc++.h>
using namespace std;

long long int primo[1000000];


long long int achaPrimo(int n){
	long long int num = 2;

	while(num*num < n){
		if(n % num == 0)
			return num;
		num++;
	}

	return num;

}

int main(){
    long long int n
	    ;
    cin>>n;
 
    long long d =2;

    while(d*d<n){
        if(n%d==0)
            break;
        
        d++;
    }
    
    if(n%d!=0)
        cout<<1<<endl;
    
    else
        cout<<1+(n-d)/2<<endl;
}
