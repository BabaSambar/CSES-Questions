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
    sort(nums.begin(), nums.end());
    ll median = nums[n/2];
    ll cost = 0;
    for(ll i=0; i<n; i++)
        cost += abs(nums[i] - median);
    cout << cost << endl;
}