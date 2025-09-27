#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int sum = 0, maxi = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        maxi = max(maxi, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}

int main()
{
    vector<int> arr = {0, 1, 0, 2, 1, 1, 1, 1, 2};
    int ans = maxSubArray(arr);
    cout << "Maximum sum is " << ans << endl;
    return 0;
}