#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string the_word = "hello";

    cin >> s;

    int j = 0;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == the_word[j])
        {
            j++;
            ans++;
        }
    }

    if(ans == 5){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}