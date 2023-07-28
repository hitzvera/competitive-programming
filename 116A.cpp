#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int a, b;
    int current_passengers = 0;
    int sufficient_passengers = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        current_passengers -= a;
        current_passengers += b;
        if(sufficient_passengers < current_passengers) {
            sufficient_passengers = current_passengers;
        }
    }

    cout << sufficient_passengers;
    return 0;
}