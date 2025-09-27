#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int cnt = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1) cnt++;
            else{
                ans = max(ans, cnt);
                cnt = 0;
            }
        }
        return max(ans, cnt);
    }

int main(){
    int num;
    cout << "Enter number of elements: ";
    cin >> num;
    vector<int> arr;
    cout << "Enter elements of array (0 & 1 only): ";
    for (int i = 0; i < num; i++)
    {
        int j;
        cin >> j;
        arr.push_back(j);
    }

    int ans = findMaxConsecutiveOnes(arr);
    cout << "Maximum consecutive ones are: " << ans;
    return 0;
}