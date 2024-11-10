#include <bits/stdc++.h>
using namespace std;

#define ll long long

void storepermutations(set<string>& s, string str, ll start, ll end)
{
    if(start==end)
    {
        s.insert(str);
        return;
    }
    for(ll i=start; i<=end; i++)
    {
        swap(str[start], str[i]);
        storepermutations(s, str, start+1, end);
        swap(str[start], str[i]);
    }
}

int main()
{
    string s; cin >> s;
    unordered_map<char, ll> letters; 
    for(ll i=0; i<s.size(); i++)
    {
        letters.find(s[i]) != letters.end() ? letters[s[i]]++ : letters[s[i]] = 1;
    }

    set<string> ss;
    storepermutations(ss, s, 0, s.size()-1);
    cout << ss.size() << endl;
    for(auto i:ss)
    {
        cout << i << endl;
    }
}
