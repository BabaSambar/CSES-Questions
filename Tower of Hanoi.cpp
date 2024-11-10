#include <bits/stdc++.h>
using namespace std;

#define ll long long

void towerOfHanoi(int n, ll a, ll b, ll c)
{
    if (n == 1) {
        cout << a << " " << b << endl;
        return;
    }
    towerOfHanoi(n - 1, a, c, b);
    cout << a << " " << b << endl;
    towerOfHanoi(n - 1, c, b, a);
}


int main()
{
    ll n; cin >> n;
    cout << (1 << n) - 1 << endl;
    towerOfHanoi(n, 1, 3, 2);
}