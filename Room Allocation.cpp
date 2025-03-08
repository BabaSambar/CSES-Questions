#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct OnlyCompareFirst {
    bool operator()(const pair<pair<ll, ll>, ll>& a, const pair<pair<ll, ll>, ll>& b) const {
        return a.first.first < b.first.first;
    }
};

int main()
{
    ll n; cin >> n;
    vector<pair<pair<ll, ll>, ll>> ranges(n);
    multiset<pair<pair<ll, ll>, ll>, OnlyCompareFirst> departures;
    unordered_map<ll, vector<pair<pair<ll, ll>, ll>>> rooms;
    for(ll i=0; i<n; i++){
        ll a, b; cin >> a >> b;
        departures.insert({{a, b}, i});
        ranges[i].first.first = a;
        ranges[i].first.second = b;
        ranges[i].second = i;
    }
    set<pair<pair<ll, ll>, ll>> checkIfExists(ranges.begin(), ranges.end());
    
    sort(ranges.begin(), ranges.end(), [](pair<pair<ll, ll>, ll> a, pair<pair<ll, ll>, ll> b){
        if(a.first.first == b.first.first) return a.first.second < b.first.second;
        return a.first.first < b.first.first;
    });
    
    ll currentRoom = 1;
    for(ll i=0; i<n; i++){
        if(checkIfExists.find(ranges[i]) == checkIfExists.end()) continue;
        rooms[currentRoom].push_back(ranges[i]);
        departures.erase(ranges[i]);
        pair<pair<ll, ll>, ll> currentPair = ranges[i];
        while(!departures.empty() && departures.upper_bound({{currentPair.first.second, 0}, 0}) != departures.end()){
            auto x = departures.upper_bound({{currentPair.first.second, 0}, 0});
            currentPair = *x;
            rooms[currentRoom].push_back(*x);
            checkIfExists.erase(*x);
            departures.erase(x);
        }
        currentRoom++;
    }
    cout << rooms.size() << endl;
    vector<ll> nums(n);
    for(auto x: rooms){
        auto roomNum = x.first;
        auto roomList = x.second;
        for(auto y: roomList) nums[y.second] = roomNum;
    }
    for(auto x: nums) cout << x << " "; cout << endl;
}