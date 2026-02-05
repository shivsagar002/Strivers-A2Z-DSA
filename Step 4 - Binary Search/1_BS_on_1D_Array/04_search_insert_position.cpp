// Problem Link : https://leetcode.com/problems/search-insert-position/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1, mid, ans = nums.size();
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (nums[mid] == target)
            {
                ans = mid;
                end = mid - 1;
            }
            else if (nums[mid] > target){
                ans = mid;
                end = mid - 1;
            }
            else
                start = mid + 1;
        }
        return ans; 
    }
};