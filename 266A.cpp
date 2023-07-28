#include<iostream>

using namespace std;

int main() {
	int n;
	int ans = 0;
	string word;
	cin >> n;
	
	cin >> word;
	
	if(n == 1) {
		cout << 0;
		return 0;
	}
	
	for(int i=1;i<n;i++){
		if(word[i-1] == word[i]){
			ans++;
		}
	}
	
	cout << ans;
	
	return 0;
}
