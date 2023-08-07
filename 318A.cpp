#include<bits/stdc++.h>

using namespace std;

int main() {
    long long k,n,ans,last_odd_section;
    cin >> n >> k;

    last_odd_section = n / 2;

    if(n % 2) {
        last_odd_section++;
    }
  

    if(k <= last_odd_section) {
        ans = k * 2 - 1;
        cout << ans;
        return 0;
    }

    ans = (k - last_odd_section) * 2;
    cout << ans;
    return 0;
}