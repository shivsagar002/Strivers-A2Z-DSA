#include <bits/stdc++.h>
#include <algorithm>                            //Library
using namespace std;

int main(){

    vector <int> v;
    string s = "ShivSagar";

    binary_search(v.begin(), v.end(), 6);
    reverse(v.begin(), v.end());
    rotate(v.begin(), v.begin()+1, v.end());
    sort(v.begin(), v.end());
    find(v.begin(), v.end(), 10);
    count(v.begin(), v.end(), 10);
    *max_element(v.begin(), v.end());
    *min_element(v.begin(), v.end());

    __builtin_popcount(10);                         //return number of set bits (1)
    next_permutation(s.begin(), s.end());           //return next permutation inn lexicographically order

    return 0;
}