#include<iostream>

using namespace std;

int main() {
	
	int k,n,w,ans=0;
	cin >> k >> n >> w;
	
	int total_price = 0;
	
	for(int i=1;i<=w;i++){
		total_price += k*i;
	}
	
	if(total_price - n <= 0) {
		ans = 0;
	} else {
		ans = total_price - n;
	}
	cout << ans;
	
	return 0;
	
}
