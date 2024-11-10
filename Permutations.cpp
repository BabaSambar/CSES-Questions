#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n; cin >> n;
    vector<ll> nums(n);

    if(n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    else if(n == 4)
    {
        cout << "3 1 4 2";
        return 0;
    }

    ll a = 1;
    for(ll i = 0; i<n; i+=2)
    {
        nums[i] = a;
        a++;
    }   
    for(ll i=1; i<n; i+=2)
    {
        nums[i] = a;
        a++;
    }
    for(ll i = 0; i<n; i++)
    {
        cout << nums[i] << " ";
    }
}