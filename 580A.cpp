#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int max_non_decreasing = 1;
    int current_record = 1;
    int start = 0;

    cin >> start;

    for (int i = 1; i < n;i++){
        int a;
        cin >> a;

        if(start > a){
            current_record = 1;
        } else {
            current_record++;
        }

        if(current_record > max_non_decreasing){
            max_non_decreasing = current_record;
        }

        start = a;
    }

    cout << max_non_decreasing;
    return 0;
}