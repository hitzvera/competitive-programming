#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t, n;
    int ans[t];
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        bool is_sorted = true;
        int arr[n], a, max_value = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            arr[j] = a;
        }
        for (int j = 1; j < n; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                is_sorted = false;
                break;
            }
        }
        if (!is_sorted)
        {
            int last_iterate;
            for (int k = n - 1; k >= 0; k--)
            {
                if (arr[k] < arr[k - 1])
                {
                    last_iterate = k;
                    break;
                }
            }

            for (int k = 0; k < last_iterate; k++)
            {
                if (max_value < arr[k])
                {
                    max_value = arr[k];
                }
            }
            ans[i] = max_value;
        }
        else
        {
            ans[i] = 0;
        }
    }

    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}