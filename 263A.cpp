#include<iostream>
#include <cstdlib>

using namespace std;

int main() {
	
	int matrix[5][5];
	int index[2];
	int ans = 0;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin >> matrix[i][j];
			if(matrix[i][j] == 1){
				index[0] = i;
				index[1] = j;
			}
		}
	}
	
	// index for the middle is [2,2]
	ans += abs(index[0]-2) + abs(index[1]-2);
	cout << ans;
	
	return 0;
	
}
