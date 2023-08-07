#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t;i++){
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n;j++){
            int a;
            cin >> a;
            arr[j] = a;
        }

        if(n % 2){
            int temp = arr[n / 2 + 1];
            arr[n / 2 + 1] = arr[n-1];
            arr[n-1] = temp;
        }

        int last_loop = n / 2;
        last_loop *= 2;

        for (int j = 0; j < last_loop;j+){
            
        }
    }
}