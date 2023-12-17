// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b, c;
    cin>>a>>b>>c;
    cout<<min(min(a, b), c)<<" "<<max(max(a, b), c);
}