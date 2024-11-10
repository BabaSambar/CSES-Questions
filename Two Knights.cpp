#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t; cin >> t;
    for(ll i=1; i<=t; i++)
    {
        // testcases
        if(i==1) cout << 0 << endl;
        else if(i==2) cout << 6 << endl;
        else if(i==3) cout << 28 << endl;
        else
        {
            ll ways = 0;
            ways += 4 * (i*i - 3); // 2s
            ways += 8 * (i*i - 4); // 3s
            ways += (4*(i-1)-8) * (i*i - 5); // 4s
            ways += (4*(i-4)) * (i*i - 7); // 6s
            ways += ((i-4)*(i-4)) * (i*i - 9); //8s
            cout << ways / 2 << endl;
        }
    }
}