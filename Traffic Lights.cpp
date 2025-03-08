#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{

}


int main()
{
    ll n, k; cin >> n >> k;
    set<ll> s = {0, n};
    vector<ll> order(k);
    for(ll i=0; i<k; i++)
    {
        ll temp; cin >> temp;
        s.insert(temp);
        order[i] = temp;
    }
    reverse(order.begin(), order.end());

    vector<ll> ans;
    ll d = 0;
    auto it = s.begin();
    for(ll i=1; i<s.size(); i++, it++)
        d = max(d, abs(*it - *next(it)));
    ans.push_back(d);
    for(ll i=0; i<k-1; i++)
    {
        s.erase(order[i]);
        ans.push_back(max(d, abs(*s.upper_bound(order[i]) - *prev(s.upper_bound(order[i])))));
    }
    reverse(ans.begin(), ans.end());
    for(auto x: ans) cout << x << " "; cout << endl;
}

