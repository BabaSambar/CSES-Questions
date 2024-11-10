#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n; cin >> n;
    ll m = 5;
    ll zeroes = 0;
    while(floor(n / m) > 0)
    {
        zeroes += floor((double)n / m);
        m *= 5;
    }
    cout << zeroes << endl;
}