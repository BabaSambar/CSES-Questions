#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(ll n, ll k, vector<ll>& e, ll start = 0)
{   
    if(n == 1) return;

    ll i = (start + k - 1) % n;
    e.push_back(i + 1);
    solve(n-1, k, e, i);
}

int main()
{
    ll n, k;
    cin >> n >> k;
    queue<ll> q;
    for (ll i = 1; i <= n; i++)
    {
        q.push(i);
    }

    vector<ll> e;
    solve(n, k, e);
    for(ll i: e) cout << i << " ";
    cout << endl;
}
