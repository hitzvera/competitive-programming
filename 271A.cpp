#include <bits/stdc++.h>

using namespace std;

int main()
{

    int year;
    int ans;
    cin >> year;
    ans = year + 1;
    

    while (true)
    {
        string year_string = to_string(ans);
        if (year_string[0] != year_string[1] 
        && year_string[0] != year_string[2] 
        && year_string[0] != year_string[3]
        && year_string[1] != year_string[2]
        && year_string[1] != year_string[3]
        && year_string[2] != year_string[3]
        ) {
            cout << year_string;
            return 0;
        }
        ans++;
    }

    return 0;
}