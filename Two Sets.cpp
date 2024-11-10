#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    // time:
    // O(4n) = O(n)
    // space:
    // O(2n) = O(n)
    ll n; cin >> n;
    vector<ll> nums(n);
    for(ll i=0; i<n; i++)
    {
        nums[i] = i+1;
    }
    set<ll> set1, set2;
    if((n * (n+1) / 2) % 2 != 0) 
    {
        cout << "NO" << endl;
    }
    else
    {
        ll sum = n*(n+1) / 4;
        for(ll i=n-1; i>=0; i--)
        {
            if(sum - nums[i] >= 0)
            {
                sum -= nums[i];
                set1.insert(nums[i]);
            }
            else
            {
                set2.insert(nums[i]);
            }
        }
        cout << "YES" << endl;
        cout << set1.size() << endl;
        for(auto i: set1)
        {
            cout << i << " ";
        }
        cout << endl;
        cout << set2.size() << endl;
        for(auto i: set2)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}