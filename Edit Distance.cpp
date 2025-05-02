#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    string s, t; cin >> s >> t;
    vector<vector<ll>> dp(s.size()+1, vector<ll>(t.size()+1));
    for(ll i=0; i<=s.size(); i++) dp[i][0] = i;
    for(ll i=0; i<=t.size(); i++) dp[0][i] = i;
    for(ll i=1; i<=s.size(); i++){
        for(ll j=1; j<=t.size(); j++){
            dp[i][j] = min({dp[i-1][j] + 1, dp[i][j-1] + 1, dp[i-1][j-1] + (s[i-1] == t[j-1] ? 0 : 1)});
        }
    }
    cout << dp[s.size()][t.size()] << endl;
}

