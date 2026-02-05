// Problem_Link : https://leetcode.com/problems/rotate-string/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return 0;
        int n = s.length();
        for(int i=0; i<n; i++){
            s = s[n-1]+s;
            s.pop_back();
            if(s==goal) return 1;
        }
        return 0;
    }
};