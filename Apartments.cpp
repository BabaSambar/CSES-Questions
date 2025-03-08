#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{

}

int main()
{
    // ll t; cin >> t;
    // while(t--) solve();

    ll n, m, k; cin >> n >> m >> k;
    vector<ll> people(n);
    vector<ll> apartments(m);
    for(ll &x : people) cin >> x;
    for(ll &x : apartments) cin >> x;
    sort(people.begin(), people.end());
    sort(apartments.begin(), apartments.end());
    auto person = people.begin();
    auto apartment = apartments.begin();
    ll ans = 0;
    while(person != people.end() && apartment != apartments.end())
    {   
        if(abs(*person - *apartment) <= k)
        {
            ans++;
            person++;
            apartment++;
        }
        else if(*person < *apartment) person++;
        else if(*person > *apartment) apartment++;
    }
    cout << ans << endl;
}