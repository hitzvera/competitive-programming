#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    bool flag = true;

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            i += 2;
            if (!flag)
            {
                cout << " ";
            }
        }
        else
        {
            flag = false;
            cout << s[i];
        }
    }

    return 0;
}