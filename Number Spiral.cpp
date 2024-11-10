#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll r, c; cin >> r >> c;
        ll p = max(r, c);
        p = p*p - p + 1;
        if(r < c)
        {
            ll d = c - r;
            if(c % 2 == 0) p-=d;
            else p+=d;
        }
        else if(r > c)
        {
            ll d = r - c;
            if(r % 2 == 0) p+=d;
            else p-=d;
        }
        cout << p << endl;
    }
}