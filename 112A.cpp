#include<iostream>
#include <cctype>

using namespace std;

int main() {
	
	string word1, word2;
	
	cin >> word1 >> word2;
	
	for(int i=0;i<word1.length();i++) {
		int first = toupper(word1[i]);
		int second = toupper(word2[i]);
		
		if(first < second) {
			cout << -1;
			return 0;	
		} else if(second < first) {
			cout << 1;
			return 0;
		}
	}
	cout << 0;
	return 0;
	
	
}
