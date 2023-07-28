#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int anton_points = 0;
    int danik_points = 0;
    string s;
    cin >> n;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            anton_points++;
        }
        else
        {
            danik_points++;
        }
    }

    if (anton_points > danik_points)
    {
        cout << "Anton";
    }
    else if (danik_points > anton_points)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }

    return 0;
}