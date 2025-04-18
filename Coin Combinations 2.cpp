#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll MOD = 1e9+7;
    ll n, x; cin >> n >> x;
    vector<ll> coins(n);
    for(auto &x: coins) cin >> x;

    vector<ll> dp(x+1, 0);
    dp[0] = 1;
    for(ll i=0; i<n; i++){
        for(ll j=coins[i]; j<=x; j++){
            dp[j] = (dp[j] + dp[j-coins[i]]) % MOD;
        }
    }
    cout << dp[x] << endl;
}