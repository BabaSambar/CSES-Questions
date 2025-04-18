#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll MOD = 1e9 + 7;
    ll n, m; cin >> n >> m;
    vector<ll> nums(n);
    for(auto &x: nums) cin >> x;

    vector<vector<ll>> ways(n, vector<ll>(m + 1, 0));
    if(nums[0] == 0) for(ll i = 1; i <= m; i++) ways[0][i] = 1;
    else ways[0][nums[0]] = 1;
    for(ll i = 0; i < n; i++){
        if(nums[i] != 0){
            if(i > 0 && nums[i] > 1) ways[i][nums[i]] = (ways[i][nums[i]] + ways[i - 1][nums[i] - 1]) % MOD;
            if(i > 0) ways[i][nums[i]] = (ways[i][nums[i]] + ways[i - 1][nums[i]]) % MOD;
            if(i > 0 && nums[i] < m) ways[i][nums[i]] = (ways[i][nums[i]] + ways[i - 1][nums[i] + 1]) % MOD;
            continue;
        }
        for(ll j = 1; j <= m; j++){
            if(i > 0 && j > 1) ways[i][j] = (ways[i][j] + ways[i - 1][j - 1]) % MOD;
            if(i > 0) ways[i][j] = (ways[i][j] + ways[i - 1][j]) % MOD;
            if(i > 0 && j < m) ways[i][j] = (ways[i][j] + ways[i - 1][j + 1]) % MOD;
        }
    }
    cout << accumulate(ways[n - 1].begin(), ways[n - 1].end(), 0LL) % MOD << endl;
}
