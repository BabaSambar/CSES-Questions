#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll MOD = 1e9 + 7;
    ll n; cin >> n;
    vector<string> grid(n);
    for(ll i = 0; i < n; i++) cin >> grid[i];

    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    grid[0][0] == '*' ? dp[0][0] = 0 : dp[0][0] = 1;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            if(grid[i][j] == '*') continue;
            if(i-1 >= 0 && grid[i - 1][j] != '*') dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
            if(j-1 >= 0 && grid[i][j - 1] != '*') dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
        }
    }
    cout << dp[n - 1][n - 1] % MOD << endl;
}
