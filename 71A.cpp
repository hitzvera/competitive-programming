#include<iostream>

using namespace std;

int main() {
	int n;
	string ans;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> ans;
		if(ans.length() > 10) {
			cout << ans[0] << ans.length()-2 << ans[ans.length()-1] << endl;
		} else {
			cout << ans << endl;
		}
	}
	return 0;
}
