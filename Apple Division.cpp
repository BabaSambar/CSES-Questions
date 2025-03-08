#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll permute(ll depth, vector<ll> nums, ll leftsum, ll rightsum, ll limit){
    if(depth == limit) return abs(leftsum-rightsum);
    ll choose = permute(depth+1, nums, leftsum+nums[depth], rightsum, limit);
    ll dontchoose = permute(depth+1, nums, leftsum, rightsum+nums[depth], limit);
    return min(choose, dontchoose);
}

int main()
{
    ll n; cin >> n;
    vector<ll> nums(n);
    for(auto& x: nums) cin >> x;
    ll answer = permute(0, nums, 0, 0, n);
    cout << answer << endl;
}