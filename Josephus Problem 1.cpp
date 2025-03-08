#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{

}

int main()
{
    ll n, k = 1;
    cin >> n;
    queue<ll> q;
    for (ll i = 1; i <= n; i++)
    {
        q.push(i);
    }

    ll flag = 0;
    while(q.size() > 1)
    {
        if(flag == k)
        {
            cout << q.front() << " ";
            q.pop();
            flag = 0;
        }
        else
        {
            q.push(q.front());
            q.pop();
            flag++;
        }
    }
    cout << q.front() << endl;

}
