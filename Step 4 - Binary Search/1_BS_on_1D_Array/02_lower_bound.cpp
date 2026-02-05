
#include <bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> &nums, int target)
{
    int start = 0, end = nums.size() - 1, mid, ans = -1;
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
    return ans;
}