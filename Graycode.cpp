#include <bits/stdc++.h>
using namespace std;
#define ll long long

void createPermutations(int n){
    int permutations = 1 << n;
    for(int i=0; i<permutations; i++){
        vector<int> binary_nums(n), gray_nums(n);
        for(int j=0; j<n; j++) binary_nums[n-1-j] = (i >> j) & 1;
        gray_nums[0] = binary_nums[0];
        for(int j=1; j<n; j++) gray_nums[j] = binary_nums[j-1] ^ binary_nums[j];
        for(auto x: gray_nums) cout << x; cout << endl;
    }
}

int main()
{
    int n; cin >> n;
    createPermutations(n);
}