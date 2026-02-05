// Problem Link : https://leetcode.com/problems/valid-anagram/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return 0;
        int map1[26] = {0}, map2[26]={0}, n=s.length();
        for(int i=0; i<n; i++){
            map1[s[i]-'a']++;
            map2[t[i]-'a']++;
        }

        for(int i = 0; i<26; i++){
            if(map1[i]!=map2[i]) return 0;
        }
        return 1;
    }
};