#include<iostream>

using namespace std;
int main() {
	int a,b;
	int ans = 0;
	cin >> a >> b;
	
	while(a <= b){
		ans++;
		a *= 3;
		b *= 2;
	}
	
	cout << ans;
	return 0;
}
