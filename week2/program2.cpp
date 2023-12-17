https://codeforces.com/problemset/problem/1030/A
#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main() {
    ll n;
    cin>>n;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin>>x;
        if (x == 1) {
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
}