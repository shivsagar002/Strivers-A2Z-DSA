#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int sum = 0;
    int len = nums.size();
    for (int i = 0; i < len; i++)
    {
        sum += nums[i];
    }
    return ((len * (len + 1)) / 2) - sum;
}

int main()
{
    int num;
    cout << "Enter number of elements: ";
    cin >> num;
    vector<int> arr;
    cout << "Enter elements of array (0-n, one number missing): ";
    for (int i = 0; i < num; i++)
    {
        int j;
        cin >> j;
        arr.push_back(j);
    }

    int missingnumber = missingNumber(arr);
    cout << "Your missing number is: " << missingnumber;
    return 0;
}