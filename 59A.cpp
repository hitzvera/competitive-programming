#include<bits/stdc++.h>

using namespace std;

int main() {
	string word;
	int uppercase = 0;
	int lowercase = 0;
	
	cin >> word;
	
	for(int i=0;i<word.length();i++){
		if((int)word[i] > 90){
			lowercase++;
		} else {
			uppercase++;
		}
	}
	
	if(lowercase >= uppercase){
		transform(word.begin(), word.end(), word.begin(), ::tolower);
	} else {
		transform(word.begin(), word.end(), word.begin(), ::toupper);
	}
	
	cout << word;
	
	return 0;
	
	
}
