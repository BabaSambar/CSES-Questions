#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD1097 1000000007

ll expo(ll base, ll e)
{
    ll r = 1;
    base %= MOD1097;
    while(e > 0)
    {
        if(e % 2 == 1)
        {
            r = (r * base) % MOD1097;
        }
        base = (base*base) % MOD1097;
        e /= 2;
    }
    return r;
}

int main()
{
    ll n; cin >> n;
    ll ans = expo(2, n);
    cout << ans << endl;
}