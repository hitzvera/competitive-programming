#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr_home[n];
    int arr_guest[n];
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int h, g;
        cin >> arr_home[i] >> arr_guest[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr_home[i] == arr_guest[j])
            {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}