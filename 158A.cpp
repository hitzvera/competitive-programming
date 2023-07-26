#include<iostream>

using namespace std;

int main() {
	
	int n, k;
	cin >> n >> k;
	int temp[n];
	int ans = 0;
	for(int i=0;i<n;i++){
		cin >> temp[i];
	}
	for(int i=0;i<n;i++){
		if(temp[i]>=temp[k-1] && temp[i]>0){
			ans++;
		}
	}
	cout << ans;
	return 0;
	
}
