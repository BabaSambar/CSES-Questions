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
    for(auto & x: nums) cin >>x;
    sort(nums.begin(), nums.end());
    ll s = 0;
    for(ll i=0; i<n; i++)
    {
        if(nums[i] > s+1)
        {
            cout << s+1 << endl;
            return 0;
        }
        s += nums[i];
    }
    cout << s+1 << endl;
}