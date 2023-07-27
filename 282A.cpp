#include<iostream>

using namespace std;

int main() {
	
	int n;
	string statement;
	int x = 0;
	cin >> n;
	
	for(int i=0;i<n;i++) {
		cin >> statement;
		if(statement[1] == '+') {
			x++;
		} else {
			x--;
		}
	}
	
	cout << x;
	return 0;
	
}
