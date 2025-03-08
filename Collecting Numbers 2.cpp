#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll calculate(vector<ll> nums)
{
    vector<ll> indices(nums.size()+1);
    for(ll i=0; i<nums.size(); i++)
        indices[nums[i]] = i;
    ll ans = 1;
    for(ll i=1; i<nums.size(); i++)
    {
        if(indices[i] > indices[i+1]) ans++;
    }
    return ans;
}

int main()
{
    // ll t; cin >> t;
    // while(t--) solve();   
    ll n, m; cin >> n >> m;
    vector<ll> nums(n);
    for(auto& x: nums) cin >> x;
    vector<pair<ll, ll>> queries(m);
    for(auto& x: queries) cin >> x.first >> x.second;
    for(auto query: queries)
    {
        swap(nums[query.first-1], nums[query.second-1]);
        cout << calculate(nums) << endl;
    }
}