#include <bits/stdc++.h>
using namespace std;

double eleva(double x){
	return x*x;
}

int main (){
	double r, x, y, z, w;

	cin >> r;

	cin >> x >> y;
	cin >> z >> w;

	double dis = sqrt( eleva(x-z) + eleva(y-w) );
	
	cout << ceil( dis / (2.0 * r));

}
