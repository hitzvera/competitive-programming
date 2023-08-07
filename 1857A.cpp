#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t;i++){
        int n, sum = 0;
        cin >> n;

        for (int j = 0; j < n;j++){
            int a;
            cin >> a;
            sum += a;
        }
        if(sum % 2){
            cout << "no\n";
        } else {
            cout << "yes\n";
        }
    }

    return 0;
}