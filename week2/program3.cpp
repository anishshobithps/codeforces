// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K
#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main() {
    ll n;
    cin>>n;
    vector<ll> arr;
    for (ll i = 2; i < n; i++) {
        if (n % i == 0) arr.push_back(i);
    }

    cout<<1<<endl;
    for (auto ele: arr) {
        cout<<ele<<endl;
    }
    cout<<n;
}