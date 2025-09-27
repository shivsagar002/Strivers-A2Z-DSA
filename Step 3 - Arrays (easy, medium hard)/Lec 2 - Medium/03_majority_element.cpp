#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
        int num = nums[0];
        int cnt = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==num) cnt++;
            else{
                if(cnt==0){
                    num = nums[i];
                    cnt++;
                }
                else{
                    cnt--;
                }
            }
        }
        return num;
    }

    int main()
{
    vector<int> arr = {0,1,0,2,1,1,1,1,2};
    int ans = majorityElement(arr);
    cout<<"Majority element is "<<ans<<endl;
    return 0;
}
