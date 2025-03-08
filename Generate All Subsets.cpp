/*
Not in the current problem set but for practice
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void generateSubsets(vector<ll>& nums, vector<vector<ll>>& subsets, ll depth, vector<ll>& subset) 
{
    if(depth >= nums.size())
    {
        subsets.push_back(subset);
        return;
    }
    subset.push_back(nums[depth]);
    generateSubsets(nums, subsets, depth + 1, subset);
    subset.pop_back();
    generateSubsets(nums, subsets, depth + 1, subset);
}

int main() {
    ll n; cin >> n;
    vector<ll> nums(n);
    for(auto& x: nums) cin >> x;

    vector<vector<ll>> subsets;
    vector<ll> subset;
    generateSubsets(nums, subsets, 0, subset);

    for(auto subset: subsets)
    {
        for(auto x: subset) cout << x << " ";
        cout << endl;
    }

    cout << subsets.size() << endl;
    return 0;
}