#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> s;
    int total_taxi = 0;

    for (int i = 0; i < n;i++){
        int num;
        cin >> num;
        s[num] = s[num] + 1;
    }

    total_taxi += s[4];
    
    if(s[3] != 0){
        total_taxi += s[3];
        if(s[1] != 0 && s[3] >= s[1]){
            s[1] = 0;
        } else if(s[1] != 0 && s[1] > s[3]){
            s[1] -= s[3];
        }
    }

    if(s[2] % 2 == 1){
        total_taxi++;
        s[1] -= 2;
        if(s[1] < 0) {
            s[1] = 0;
        }
    }

    total_taxi += s[2] / 2;

    if(s[1] > 0 && s[1] <= 4){
        total_taxi++;
    } else {
        total_taxi += s[1] / 4;
        if(s[1] % 4 != 0){
            total_taxi++;
        }
    }

    cout << total_taxi;

    return 0;
}