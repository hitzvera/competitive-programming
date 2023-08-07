#include <bits/stdc++.h>

using namespace std;

int main()
{
    string one;
    string two;
    string ans = "";

    cin >> one >> two;

    for (long long i = 0; i < one.length(); i++)
    {
        if (one[i] != two[i])
        {
            ans += '1';
        }
        else if (one[i] == '1')
        {
            ans += '0';
        }
        else
        {
            ans += '0';
        }
    }

    cout << ans;

    return 0;
}