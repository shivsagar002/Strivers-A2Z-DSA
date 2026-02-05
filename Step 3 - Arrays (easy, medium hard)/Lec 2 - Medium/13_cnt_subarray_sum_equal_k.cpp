// Problem Link : https://leetcode.com/problems/subarray-sum-equals-k/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();
        int cnt = 0, sum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
            if(sum==k) cnt++;
            int rem = sum-k;
            if(mp.find(rem) != mp.end()){
                cnt += mp[rem];
            }
            if(mp.find(sum) == mp.end()) mp[sum]=1;
            else mp[sum]++;
        }
        return cnt;
    }
};