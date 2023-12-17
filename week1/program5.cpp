// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
#include <bits/stdc++.h>

using namespace std;

int main() {
    char b;
    long long a, c;
    cin>>a>>b>>c;
    if ((b == '<' && a < c) || (b == '>' && a > c) || (b == '=' && a == c)) {
        cout<<"Right";
    } else {
        cout<<"Wrong";
    }
}