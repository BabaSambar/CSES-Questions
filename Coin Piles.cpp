#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll a, b; cin >> a >> b;
        if((a + b)%3!=0) cout << "NO" << endl;
        else if(abs(a - b) > max(a, b)/2) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}