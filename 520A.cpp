#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    set<char> alphabets;
    int n;
    int ans = 0;
    cin >> n;
    cin >> s;

    for (int i = 0; i < n;i++){
        s[i] = tolower(s[i]);
        alphabets.insert(s[i]);
    }

    if(alphabets.size() == 26){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}