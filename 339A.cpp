#include <bits/stdc++.h>

using namespace std;


int main() {
	
	string input;
	string token;
	string ans = "";
	char delimiter = '+';
	cin >> input;
	
	istringstream stream(input);
	while(getline(stream, token, delimiter)){
		ans += token;
	}
	sort(ans.begin(), ans.end());
	for(int i=0;i<ans.length();i++){
		if(i == ans.length()-1){
			cout << ans[i];
		} else {
			cout << ans[i] << "+";
		}
	}
	
	return 0;
	
	
}
