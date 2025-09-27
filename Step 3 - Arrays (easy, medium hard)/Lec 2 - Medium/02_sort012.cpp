#include<bits/stdc++.h>
using namespace std;

vector<int> sort012(vector<int> &nums)
{
    int start = 0, mid = 0, end = nums.size() - 1;
    while (mid <= end)
    {
        if (nums[mid] == 0)
        {
            swap(nums[start], nums[mid]);
            start++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[end]);
            end--;
        }
    }
    return nums;
}

void printArray(vector<int> arr){
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    int n = 5;
    vector<int> arr = {2,0,1,0,2,1,0,1,1,2};
    cout<<"Your array: ";
    printArray(arr);
    vector<int> ans = sort012(arr);
    cout<<"Sorted array: ";
    printArray(arr);
    return 0;
}