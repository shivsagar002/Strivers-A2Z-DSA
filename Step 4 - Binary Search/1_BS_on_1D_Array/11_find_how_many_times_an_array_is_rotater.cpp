#include<bits/stdc++.h>
using namespace std;

int rotatedTimes(vector<int> &nums)
{
    int start = 0, end = nums.size() - 1, mid;
    if (nums[0] < nums[end])
        return nums[0];
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (nums[mid] > nums[end])
            start = mid + 1;
        else
            end = mid;
    }
    return start;
}