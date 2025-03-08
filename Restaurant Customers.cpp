#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{

}

int main()
{
    // ll t; cin >> t;
    // while(t--)
    //     solve();

    ll n; cin >> n;
    vector<ll> starts(n);
    vector<ll> ends(n);
    for(ll i=0; i<n; i++) cin >> starts[i] >> ends[i];

    sort(starts.begin(), starts.end());
    sort(ends.begin(), ends.end());

    ll ans = 0;
    ll c = 0;
    ll i = 0, j = 0;
    while(i < n && j < n)
    {
        if(starts[i] < ends[j])
        {
            c++;
            i++;
        }
        else if(starts[i] > ends[j])
        {
            c--;
            j++;
        }
        ans = max(ans, c);        
    }
    cout << ans << endl;
}