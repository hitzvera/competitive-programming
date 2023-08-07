#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    if(n == 1){
        cout << -1;
        return 0;
    }

    if(n % 2){
        long long temp = n / 2;
        cout << temp - n;
        return 0;
    }

    cout << n / 2;
    return 0;
}
