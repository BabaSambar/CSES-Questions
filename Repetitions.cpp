#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s; cin >> s;
    ll a = 0;
    ll m = 0;
    for(ll i = 0; i<s.size()-1; i++)
    {
        if(s[i] == s[i+1])
        {
            a += 1;
            m = max(a, m);
        }
        else
        {
            a = 0;
        }
    }
    cout << m+1;
}