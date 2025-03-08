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
    vector<ll> nums(n);
    for(auto& x: nums)
    {
        cin >> x;
    }
    vector<ll> indices(n+1);
    for(ll i=0; i<n; i++)
        indices[nums[i]] = i;

    ll ans = 1;
    for(ll i=1; i<n; i++)
    {
        if(indices[i] > indices[i+1]) ans++;
    }
    cout << ans << endl;

}