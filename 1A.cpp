#include<iostream>

using namespace std;
 
int main() {
	long long n,m,a;
	
	cin >> n >> m >> a;
	
	long long x_axis = n/a;
	long long y_axis = m/a;
	
	if(n % a) {
		x_axis++;
	}
	if(m % a) {
		y_axis++;
	}
	cout << x_axis * y_axis;
	
	return 0;
}
