#include<bits/stdc++.h>

using namespace std;


int main() {
	string word;
	
	cin >> word;
	
	for(int i=0;i<word.length();i++){
		if(
		word[i] != 'A' && 
		word[i] !=  'O' && 
		word[i] != 'Y' && 
		word[i] != 'E' && 
		word[i] !=  'U' && 
		word[i] !=  'I' && 
		word[i] != 'a' && 
		word[i] != 'o' && 
		word[i] != 'y' &&
		word[i] != 'e' &&
		word[i] != 'u' && 
		word[i] != 'i') {
			cout << '.' << (char)tolower(word[i]);
		}
	}
	
	return 0;
	
	
}
