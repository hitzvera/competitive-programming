#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    set<char> alphabets;
    if(s.length() == 2){
        cout << 0;
        return 0;
    }

    for (int i = 1; i < s.length()-1;i+=3){
        alphabets.insert(s[i]);
    }

    cout << alphabets.size();

    return 0;

}