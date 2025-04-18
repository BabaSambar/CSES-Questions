#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n; cin >> n;
    ll count = 0;

    while(to_string(n) != "0" || n > 0){
        ll max_num = 0;
        for(ll i=to_string(n).size()-1; i>=0; i--){
            if(to_string(n)[i] != '0'){
                max_num = max(max_num, (ll)to_string(n)[i] - '0');
            }
        }
        if(max_num != 0){
            count++;
            n -= max_num;
        }
    }    
    cout << count << endl;
}