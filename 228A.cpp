#include<bits/stdc++.h>

using namespace std;

int main() {

    int number_of_duplicate = 0;
    int s1,s2,s3,s4;

    cin >> s1 >> s2 >> s3 >> s4;
    set<int> a;

    a.insert(s1);
    a.insert(s2);
    a.insert(s3);
    a.insert(s4);

    cout << 4 - a.size();

    return 0;
}