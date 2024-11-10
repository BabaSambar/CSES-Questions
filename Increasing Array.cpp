#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n; cin >> n;
    vector<ll> nums(n);
    for(ll i =0; i<n; i++)
    {
        cin >> nums[i];
    }
    ll ans = 0;
    ll m = nums[0];
    for(ll i=1; i<n; i++)
    {
        if(nums[i] < m)
        {
            ans += m - nums[i];
        }
        m = max(m, nums[i]);
    }
    cout << ans;
}