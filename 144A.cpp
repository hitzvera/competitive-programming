#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int max = 0;
    int min = 101; //max is 100
    int max_index, min_index;
    int ans;

    for (int i = 0; i < n;i++){
        cin >> arr[i];
        if(max < arr[i]){
            max = arr[i];
            max_index = i;
        }

        if(min >= arr[i]){
            min = arr[i];
            min_index = i;
        }
    }

    if(max_index > min_index){
        min_index++;
    }

    ans = max_index + ((n - 1) - min_index);

    cout << ans;

    return 0;
}