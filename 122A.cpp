#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int lucky_numbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    cin >> n;

    for(auto i:lucky_numbers){
        if(n % i == 0){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}