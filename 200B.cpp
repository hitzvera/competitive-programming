#include<bits/stdc++.h>

using namespace std;


int main() {
    double sum;
    int n;
    cin >> n;

    for (int i = 0; i < n;i++){
        double p;
        cin >> p;
        sum += p;
    }

    double average = sum / n;

    cout << fixed << setprecision(12) << average;
    return 0;
}