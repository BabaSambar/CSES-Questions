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
    ll n, x; cin >> n >> x;
    vector<ll> nums(n);
    multiset<ll> s;
    for(auto& i: nums) cin >> i;
    for(ll i=0; i<n; i++)
    {  
        if(s.find(x - nums[i]) != s.end())
        {
            cout << i + 1 << " " << find(nums.begin(), nums.end(), x - nums[i]) - nums.begin() + 1 << endl;
            return 0;
        }
        s.insert(nums[i]);
    }
    cout << "IMPOSSIBLE" << endl;

}

