// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main() {
    ll n;
    cin>>n;
    ll even = 0, odd = 0, pos = 0, neg = 0;
    vector<ll> arr;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin>>x;
        arr.push_back(x);
    }

    for (ll i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        if (arr[i] > 0) {
            pos++;
        } else if (arr[i] < 0) {
            neg++;
        }
    }

    cout<<"Even: "<<even;
    cout<<"\nOdd: "<<odd;
    cout<<"\nPositive: "<<pos;
    cout<<"\nNegative: "<<neg;
}