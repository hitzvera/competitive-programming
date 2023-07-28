#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int danger_count = 0;
	string ans;
	
	cin >> s;
	
	if(s.length() < 2){
		cout << "NO";
		return 0;
	}
	
	for(int i=1;i<s.length();i++){
		if(s[i-1] == s[i]){
			if(danger_count == 0){
				danger_count++;
			}
			danger_count++;
		} else {
			danger_count = 0;
		}
		if(danger_count == 7){
			cout << "YES";
			return 0;
		}
	}
	
	cout << "NO";
	return 0;
}
