#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int ans = 0;
    string current_pole = "";
    string s;
    cin >> n;

    for (int i = 0; i < n;i++){
        cin >> s;
        if(s != current_pole) {
            ans++;
            current_pole = s;
        }
    }

    cout << ans;
    return 0;
}