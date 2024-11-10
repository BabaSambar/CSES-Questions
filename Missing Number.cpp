#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n; cin >> n;
    ll s = 0;
    for(ll i = 0; i<n-1; i++)
    {
        ll t; cin >> t;
        s += t;
    }
    cout << (n * (n + 1) / 2) - s;
}