// Problem link : https://leetcode.com/problems/largest-odd-number-in-string/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.size()-1; i>=0; i--){
            if(num[i]%2==0) num.pop_back();
            else break;
        }
        return num;
    }
};