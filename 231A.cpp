#include<iostream>

using namespace std;

int main() {
	int n;
	int number;
	int ans = 0;
	
	cin >> n;
	for(int i=0;i<n;i++){
		int temp = 0;
		for(int j=0;j<3;j++){
			cin >> number;
			temp += number;
		}
		if(temp >= 2){
			ans++;
		}
	}
	cout << ans;
	return 0;
}
