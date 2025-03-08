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

    set<ll> s;
    ll l = 0, r = 0, ans = 0;
    
    while(r < n)
    {
        if(s.find(nums[r]) != s.end())
        {
            s.erase(nums[l]);
            l++;
        }
        else
        {
            s.insert(nums[r]);
            r++;
        }
        ans = max(ans, (ll)s.size());
    }
    cout << ans << endl;
}