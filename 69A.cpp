#include<bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	int x,y,z, xsum=0, ysum=0, zsum=0;
	int sum = 0;
	
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> x >> y >> z;
		xsum += x;
		ysum += y;
		zsum += z;
	}
	
	if(xsum == 0 && ysum == 0 && zsum==0){
		cout << "YES";
	} else {
		cout << "NO";
	}
	
	return 0;
}
