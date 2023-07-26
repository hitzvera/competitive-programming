#include<iostream>

using namespace std;

int main(){
	int m,n;
	
	cin >> m >> n;
	
	if(m < 2 && n < 2) {
		cout << 0;
		return 0;
	}
	
	int ans = m / 2 * n;
	
	if(m % 2) {
		ans += n / 2;
	}
	
	cout << ans;
	return 0;
}
