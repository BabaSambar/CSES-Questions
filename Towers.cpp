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

    vector<ll> v;
    for(ll i=0; i<n; i++)
    {
        if(upper_bound(v.begin(), v.end(), nums[i]) != v.end()) 
            *upper_bound(v.begin(), v.end(), nums[i]) = nums[i];
        else
            v.push_back(nums[i]);
    }
    cout << v.size() << endl;
}