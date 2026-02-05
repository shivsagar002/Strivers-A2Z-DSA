// Problem Link : https://leetcode.com/problems/4sum/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;
        while(i<n-3){
            int j = i+1;
            while(j<n-2){
                int k = j+1;
                int l = n-1;
                while(k<l){
                    long long sum = nums[i]+nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if(sum> (long long)INT_MAX) sum = INT_MAX;
                    if(sum==target){
                        ans.push_back({nums[i],nums[j],nums[k], nums[l]});
                        k++;
                        l--;
                        while(nums[k]==nums[k-1] && k<l) k++;
                        while(nums[l]==nums[l+1] && k<l) l--;
                    }
                    else if(sum>target){
                        l--;
                        while(nums[l]==nums[l+1] && k<l) l--;
                    }
                    else{
                        k++;
                        while(nums[k]==nums[k-1] && k<l) k++;
                    }
                }
                j++;
                while(nums[j]==nums[j-1] && j<n-2) j++;
            }
            i++;
            while(nums[i]==nums[i-1] && i<n-3) i++;
        }
        return ans;
    }
};