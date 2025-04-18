#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll MOD = 1e9+7;
    ll n; cin >> n;
    vector<ll> dp(n+1, 0);
    dp[0]=1;
    for(ll i=1; i<=n; i++){
        ll ways=0;
        for(ll j=1; j<=6; j++){
            if(i-j>=0){
                ways+=dp[i-j];
            }
        }
        dp[i] = ways % MOD;
    }
    cout << dp[n] << endl;
}