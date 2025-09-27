#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;
    for(auto i:nums){
        ans ^= i;
    }
    return ans;
}

int main(){
    int num;
    cout << "Enter number of elements: ";
    cin >> num;
    vector<int> arr;
    cout << "Enter elements of array : ";
    for (int i = 0; i < num; i++)
    {
        int j;
        cin >> j;
        arr.push_back(j);
    }

    int ans = singleNumber(arr);
    cout << "Single number is: " << ans;
    return 0;
}