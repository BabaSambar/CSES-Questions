#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<vector<ll>> dp;

int main(){
    ll n; cin >> n;
    vector<ll> nums(n);
    for(auto &x: nums) cin >> x;
    dp.assign(n, vector<ll>(n, 0));
    for(ll i=1; i<=n; i++){
        for(ll j=0; j+i-1 < n; j++){
            if(i == 1) dp[j][j+i-1] = nums[j];
            else dp[j][j+i-1] = max(nums[j] - dp[j+1][j+i-1], nums[j+i-1] - dp[j][j+i-2]);
        }
    }
    cout << (dp[0][n-1] + accumulate(nums.begin(), nums.end(), 0LL)) / 2 << endl;
}