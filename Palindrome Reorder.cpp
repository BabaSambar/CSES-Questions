#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s; cin >> s;
    map<char, ll> chars;
    for(ll i=0; i<s.size(); i++)
    {
        if(chars.find(s[i]) != chars.end()) chars[s[i]]++;
        else 
        {
            chars[s[i]] = 1;
        }
    }

    ll c = 0;
    ll l=0, r=s.size()-1;
    string ss = s;
    char singlechar;
    for(auto i: chars)
    {
        if(i.second % 2 == 0)
        {
        }
        else
        {
            c++;
            singlechar = i.first;
        }
        if(c > 1)
        {
            cout << "NO SOLUTION" << endl;
            return 0;
        }
        while(i.second > 1)
        {
            // cout << i.first << ", " <<  i.second <<endl;
            // cout << l << ",, " << r <<endl;
            ss[l] = i.first;
            ss[r] = i.first;
            l++;
            r--;
            i.second -= 2;
        }
    }
    if(ss.size() % 2 == 1) ss[ss.size()/2] = singlechar;
    cout << ss << endl;
}