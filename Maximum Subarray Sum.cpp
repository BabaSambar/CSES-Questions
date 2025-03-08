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
    for(auto& x: nums) cin >> x;

    ll m = nums[0], curr = nums[0];
    for(ll i=1; i<n; i++)
    {
        curr = max(nums[i], curr + nums[i]);
        m = max(m, curr);
    }
    cout << m << endl;
}