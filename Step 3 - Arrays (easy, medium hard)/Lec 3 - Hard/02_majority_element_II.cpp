// Problem Link : https://leetcode.com/problems/majority-element-ii/description/

#include <bits/stdc++.h>;
using namespace std;

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
            return nums;
        int majority = (n / 3) + 1;

        int cnt1 = 0, cnt2 = 0;
        int num1 = INT_MIN, num2 = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (cnt1 == 0 && nums[i] != num2)
            {
                num1 = nums[i];
                cnt1++;
            }
            else if (cnt2 == 0 && nums[i] != num1)
            {
                num2 = nums[i];
                cnt2++;
            }
            else if (nums[i] == num1)
            {
                cnt1++;
            }
            else if (nums[i] == num2)
            {
                cnt2++;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }

        cnt1 = 0;
        cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == num1)
            {
                cnt1++;
            }
            else if (nums[i] == num2)
            {
                cnt2++;
            }
        }

        vector<int> ans;
        if (cnt1 >= majority)
            ans.push_back(num1);
        if (cnt2 >= majority)
            ans.push_back(num2);

        return ans;
    }
};