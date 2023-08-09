#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t;i++){
        int a, b;
        int ans = 0;
        cin >> a >> b;

        if(a % b != 0){
            int temp;
            temp = a / b + 1;
            cout << (b * temp) - a << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}