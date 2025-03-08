#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair    
#define MOD 1000000007
#define PI 3.141592653589793238462643383279589793238462643383279502884197169399375105820974944592307816406286

int main()
{
    ios_base::sync_with_stdio(false);    
    cin.tie(NULL);
    cout.tie(NULL);

    ll n; cin >> n;
    vector<pair<pair<ll, ll>, ll>> ranges(n);
    for(ll i=0; i<n; i++){
        ll a, b; cin >> a >> b;
        ranges[i].second = i;
        ranges[i].first.first = a;
        ranges[i].first.second = b;
    }
    sort(ranges.begin(), ranges.end(), [](pair<pair<ll, ll>, ll> a, pair<pair<ll, ll>, ll> b){
        if(a.first.first == b.first.first) return a.first.second > b.first.second;
        return a.first.first < b.first.first;
    });

    vector<ll> subranges(n);
    ll minimum = INTMAX_MAX;
    for(ll i=n-1; i>=0; i--){
        if(ranges[i].first.second >= minimum) subranges[ranges[i].second] = 1;
        else subranges[ranges[i].second] = 0;
        minimum = min(ranges[i].first.second, minimum);
    }
    for(auto x: subranges) cout << x << " "; cout << endl;
    vector<ll> contained(n);
    ll maximum = 0;
    for(ll i=0; i<n; i++){
        if(ranges[i].first.second <= maximum) contained[ranges[i].second] = 1;
        else contained[ranges[i].second] = 0;
        maximum = max(ranges[i].first.second, maximum);
    }
    for(auto x: contained) cout << x << " "; cout << endl;
}