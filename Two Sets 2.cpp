#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll MOD = 1e9+7;
    ll n; cin >> n;

    // Check if possible to make sum
    if((n * (n + 1) / 2) % 2 != 0){
        cout << 0 << endl;
        return 0;
    }

    ll sum = (n * (n + 1)) / 4;
    
    vector<ll> dp(sum+1, 0);
    dp[0] = 1;

    for(ll i=1; i<=n; i++){
        for(ll j=sum; j>=0; j--){
            if(j - i < 0) continue;
            dp[j] = (dp[j] + dp[j-i]) % MOD;
        }
    }
    cout << (dp[sum] * 500000004LL) % MOD << endl;
}