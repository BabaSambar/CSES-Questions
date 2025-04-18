#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, k; cin >> n >> k;
    vector<ll> coins(n);
    for(auto &x: coins) cin >> x;

    vector<ll> dp(k+1, 1e18);
    dp[0]=0;
    for(ll i=1; i<=k; i++){
        for(ll j=0; j<n; j++){
            if(coins[j] <= i){
                dp[i] = min(dp[i], dp[i-coins[j]]+1);
            }
        }
    }
    if(dp[k] == 1e18){
        cout << -1 << endl;
    }else{
        cout << dp[k] << endl;
    }

}