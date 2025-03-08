// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define pb push_back
// #define mp make_pair    
// #define MOD 1000000007
// #define PI 3.141592653589793238462643383279589793238462643383279502884197169399375105820974944592307816406286

// int main()
// {
//     ios_base::sync_with_stdio(false);    
//     cin.tie(NULL);
//     cout.tie(NULL);

//     ll n; cin >> n;
//     vector<pair<pair<ll, ll>, ll>> ranges(n);
//     for(ll i=0; i<n; i++){
//         ll a, b; cin >> a >> b;
//         ranges[i].second = i;
//         ranges[i].first.first = a;
//         ranges[i].first.second = b;
//     }
//     sort(ranges.begin(), ranges.end(), [](pair<pair<ll, ll>, ll> a, pair<pair<ll, ll>, ll> b){
//         if(a.first.first == b.first.first) return a.first.second > b.first.second;
//         return a.first.first < b.first.first;
//     });

//     vector<ll> subranges(n);
//     vector<ll> minimums;
//     for(ll i=n-1; i>=0; i--){
//         subranges[ranges[i].second] = minimums.upper_bound(ranges[i].first.second);
//         minimums.push(ranges[i].first.second);
//     }
//     for(auto x: subranges) cout << x << " "; cout << endl;
//     vector<ll> contained(n);
//     vector<ll> maximums;
//     for(ll i=0; i<n; i++){
//         contained[ranges[i].second] = maximums.size() - distance(maximums.begin(), maximums.lower_bound(ranges[i].first.second));
//         maximums.push_back(ranges[i].first.second);
//     }
//     for(auto x: contained) cout << x << " "; cout << endl;
// }

