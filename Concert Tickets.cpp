#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{


}


ll binarySearch(vector<ll>& nums, ll target)
{
    ll left = 0, right = nums.size() - 1;
    ll mid = left + (right - left) / 2;
    while(left <= right)
    {
        mid = left + (right - left) / 2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] < target) left = mid + 1;
        else right = mid - 1;   
    }
    if(nums[mid] > target) return mid - 1;
    return mid;
}

int main()
{
    // ll t; cin >> t;
    // while(t--) solve();
    ll n, m; cin >> n >> m;
    vector<ll> nums(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<ll> ppl(m);
    for(ll i=0; i<m; i++)
    {
        cin >> ppl[i];
    }
    sort(nums.begin(), nums.end()); // o nlogn
    
    multiset<ll> ticketSet(nums.begin(), nums.end());
    for(ll i = 0; i < m; i++) {
        auto it = ticketSet.upper_bound(ppl[i]); // Find the smallest ticket price greater than ppl[i]
        if(it == ticketSet.begin()) { // If there's no ticket price less than or equal to ppl[i]
            cout << -1 << endl; // Output -1, indicating no suitable ticket
        } else {
            --it; // Move iterator to the largest ticket price less than or equal to ppl[i]
            cout << *it << endl; // Output the ticket price
            ticketSet.erase(it); // Remove the ticket from the set as it's sold
        }
    }

}