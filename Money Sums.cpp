#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n; cin >> n;
    vector<ll> coins(n);
    for(auto& x: coins) cin >> x;
    ll sum = accumulate(coins.begin(), coins.end(), 0);
    vector<bool> dp(sum+1, 0);
    
    for(ll i=0; i<coins.size(); i++){
        bool marked = false;
        for(ll j=sum; j>=0; j--){
            if(dp[j] == true && j + coins[i] <= sum){
                dp[j+coins[i]] = true;
            }
        }
        dp[coins[i]] = true;
    }
    cout << accumulate(dp.begin(), dp.end(), 0) << endl;
    for(ll i=0; i<sum+1; i++){
        if(dp[i]) cout << i << " ";
    }
    cout << endl;
}
