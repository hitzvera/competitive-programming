#include<bits/stdc++.h>

using namespace std;

int main() {
	
	string word;
	set<char> set_word;
	
	cin >> word;
	
	for(int i=0;i<word.length();i++){
		set_word.insert(word[i]);
	}
	
	if(set_word.size() % 2){
		cout << "IGNORE HIM!";
	} else {
		cout << "CHAT WITH HER!";
	}
	
	return 0;
	
}
