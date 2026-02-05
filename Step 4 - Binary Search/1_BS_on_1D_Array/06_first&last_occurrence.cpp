// Problem Link : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lower_bound(vector<int>& nums, int target){
        int start = 0, end = nums.size()-1, mid, ans = -1;
        while(start<=end){
            mid = start + (end-start)/2;
            if(nums[mid]==target){
                ans = mid;
                end = mid-1;
            }
            else if(nums[mid]>target) end = mid-1;
            else start = mid+1;
        }
        return ans;
    }
    int upper_bound(vector<int>& nums, int target){
        int start = 0, end = nums.size()-1, mid, ans = -1;
        while(start<=end){
            mid = start + (end-start)/2;
            if(nums[mid]==target){
                ans = mid;
                start = mid+1;
            }
            else if(nums[mid]>target) end = mid-1;
            else start = mid+1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int lwr_bnd = lower_bound(nums, target);
        int upr_bnd = upper_bound(nums, target);

        return {lwr_bnd, upr_bnd};
    }
};