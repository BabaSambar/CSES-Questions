#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll MOD = 1e9+7;
    ll n, x; cin >> n >> x;
    vector<ll> coins(n);
    for(auto &x: coins) cin >> x;

    vector<ll> dp(x+1, 0);
    dp[0] = 1;
    for(ll i=1; i<=x; i++){
        ll ways = 0;
        for(ll j=0; j<n; j++){
            if(coins[j] <= i){
                ways += dp[i-coins[j]];
            }
        }
        dp[i] = ways % MOD;
    }
    cout << dp[x] << endl;
}