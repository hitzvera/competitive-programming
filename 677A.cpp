#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, h;
    int total_width = 0;
    cin >> n >> h;

    int a;
    for (int i = 0; i < n;i++){
        cin >> a;
        if(a > h){
            total_width += 2;
        } else {
            total_width++;
        }
    }

    cout << total_width;
    return 0;
}