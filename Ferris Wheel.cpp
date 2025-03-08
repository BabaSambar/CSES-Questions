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
    ll n, k; cin >> n >> k;
    vector<ll> nums(n);
    for(ll i = 0; i < n; i++) 
    {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    
    ll l=0, r=n-1;
    ll ans = 0;
    while(l <= r) 
    {
        if(l == r)
        {
            ans++;
            break;
        }
        if(nums[l] + nums[r] <= k) l++;
        r--;
        ans++;
    }
    cout << ans << endl;
    return 0;

}
