#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    if(s.find('H') != string::npos){
        cout << "YES";
        return 0;
    }
    if (s.find('Q') != string::npos)
    {
        cout << "YES";
        return 0;
    }
    if (s.find('9') != string::npos)
    {
        cout << "YES";
        return 0;
    }

    cout << "NO";
    return 0;
}