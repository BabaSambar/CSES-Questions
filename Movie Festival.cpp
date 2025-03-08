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
    vector<pair<ll, ll>> nums(n);
    for(ll i=0; i<n; i++)
    {
        cin >> nums[i].first >> nums[i].second;
    }

    sort(nums.begin(), nums.end(), [](pair<ll, ll> a, pair<ll, ll> b) {return a.second < b.second;});
    ll ans = 0; ll end = 0;
    for(ll i=0; i<n; i++)
    {
        if(nums[i].first >= end)
        {
            ans++;
            end = nums[i].second;
        }
    }
    cout << ans << endl;

}


