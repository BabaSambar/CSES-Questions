#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll MOD = 1e9 + 7;
vector<ll> dp(1e6+1, 0);

int main(){
    dp[1] = 2;
    dp[2] = 8;
    for(ll i=3; i<=1e6+1; i++) dp[i] = (6*dp[i-1] % MOD - 7*dp[i-2] % MOD + MOD) % MOD;
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << dp[n] << endl;
    }
}