#include <bits/stdc++.h>

using namespace std;

int count_digit(int number)
{
    int count = 0;
    while (number != 0)
    {
        number /= 10;
        count++;
    }
    return count;
}

int customRound(int number, int nearest)
{
    int remainder = number % nearest;
    int halfNearest = nearest / 2;

    if (remainder >= halfNearest)
    {
        return number + (nearest - remainder);
    }
    else
    {
        return number - remainder;
    }
}

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s;
        string ans = "";
        int last_position = -1;
        cin >> s;
        for (int j = s.length() - 1; j >= 0; j--)
        {
            if (int(s[j] - '0') >= 5)
            {
                if (j != 0)
                {
                    if ((s[j - 1] - '0') <= 8)
                    {
                        s[j - 1] = ((s[j - 1] - '0') + 1) + '0';
                    }
                    s[j] = '0';
                }
                last_position = j;
            }
        }

        if (last_position != -1)
        {
            for (int j = 0; j < last_position; j++)
            {
                ans += s[j];
            }
            for (int j = last_position; j < s.length(); j++)
            {
                if (j == 0)
                {
                    ans += "10";
                }
                else
                {
                    ans += '0';
                }
            }
        }

        if(ans == ""){
            cout << s << endl;
        } else {
            cout << ans << endl;
        }

    }

    return 0;
}