// https://codeforces.com/problemset/problem/4/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a;
    cin>>a;
    if (a % 2 == 0 && a > 2) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}