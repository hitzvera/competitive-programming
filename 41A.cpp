#include<bits/stdc++.h>

using namespace std;

void reverse_word(string& s){
    for (int i = 0; i < s.length() / 2;i++){
        swap(s[i], s[s.length() - i - 1]);
    }
}

int main() {
    string bengladish, bingladish;

    cin >> bengladish >> bingladish;

    reverse_word(bengladish);
    
    if(bengladish == bingladish) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}