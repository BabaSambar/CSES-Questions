#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    ll n, x; cin >> n >> x;
    vector<ll> books(n), prices(n);
    for(auto &x: books) cin >> x;
    for(auto &x: prices) cin >> x;
    vector<ll> dp(x+1, 0);
    for(ll i=0; i<n; i++){
        for(ll j=x; j>=0; j--){
            if(books[i] <= j){
                dp[j] = max(dp[j], dp[j-books[i]]+prices[i]);
            }
        }
    }
    cout << dp[x] << endl;
}