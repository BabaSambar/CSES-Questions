#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{

}

int main()
{
    // ll t; cin >> t;
    // while(t--) solve();

    ll n; cin >> n;
    set<ll> s;
    for(ll i = 0; i<n; i++)
    {
        ll temp; cin >> temp;
        s.insert(temp);
    }
    cout << s.size();
}