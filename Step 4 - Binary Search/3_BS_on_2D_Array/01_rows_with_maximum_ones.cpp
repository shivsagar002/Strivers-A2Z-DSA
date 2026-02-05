// Problem Link : https://leetcode.com/problems/row-with-maximum-ones/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int cnt_ones(vector<int> &nums, int target)
{
    sort(nums.begin(),nums.end());
    int start = 0, end = nums.size() - 1, mid, ans = nums.size();
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (nums[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return nums.size()-ans;
}
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int max_ones = 0, max_row = 0;
        for(int i=0; i<m; i++){
            int tot_ones = cnt_ones(mat[i],1);
            if(tot_ones>max_ones){
                max_ones = tot_ones;
                max_row = i;
            }
        }
        return {max_row, max_ones};
    }
};