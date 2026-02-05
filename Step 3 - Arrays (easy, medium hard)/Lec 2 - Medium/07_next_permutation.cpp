#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &nums)
{
    int i = nums.size() - 2, j = nums.size() - 1;
    for (i; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            break;
        }
    }

    if (i == -1)
    {
        reverse(nums.begin(), nums.end());
        return nums;
    }

    for (j; j > i; j--)
    {
        if (nums[i] < nums[j])
        {
            break;
        }
    }

    swap(nums[i], nums[j]);

    reverse(nums.begin() + i + 1, nums.end());
    return nums;
}

int main()
{
    vector<int> A = {2, 1, 5, 4, 3, 0, 0};
    vector<int> ans = nextPermutation(A);

    cout << "The next permutation is: [";
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << "]\n";
    return 0;
}