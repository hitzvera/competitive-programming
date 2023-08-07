#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string ans = "I hate";
    cin >> n;

    if (n == 1) {
        cout << "I hate it";
        return 0;
    }

    for (int i = 2; i <= n;i++){
        if(i % 2){
            ans += " that I hate";
        } else {
            ans += " that I love";
        }
    }

    ans += " it";
    cout << ans;
    return 0;
}