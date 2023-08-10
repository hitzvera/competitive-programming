#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int capslock_count = 0;
    int is_first_word_lowercase = false;

    if (int(s[0]) >= 97 && int(s[0]) <= 122)
    {
        is_first_word_lowercase = true;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (int(s[i]) >= 65 && int(s[i]) <= 90)
        {
            capslock_count++;
        }
    }

    if (capslock_count == s.length())
    {
        for (int i = 0; i < s.length(); i++)
        {
            cout << char(int(s[i]) + 32);
        }
        return 0;
    }

    if (capslock_count == s.length() - 1 && is_first_word_lowercase)
    {
        s[0] = char(int(s[0]) - 32);
        cout << s[0];

        for (int i = 1; i < s.length(); i++)
        {
            cout << char(int(s[i]) + 32);
        }

        return 0;
    }

    cout << s;

    return 0;
}