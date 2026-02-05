// Problem Link : https://leetcode.com/problems/remove-outermost-parentheses/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        string ans = "";
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='(') cnt++;
            else cnt--;

            if(cnt>1) ans.push_back(s[i]);
            else if(cnt==1 && s[i]==')') ans.push_back(s[i]);
        }
        return ans;
    }
};