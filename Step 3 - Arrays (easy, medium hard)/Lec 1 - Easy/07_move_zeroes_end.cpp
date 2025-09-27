#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int ptr = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]!=0) swap(nums[i], nums[ptr++]);
    }
}

int main(){
    int num;
    cout<<"Enter number of elements: ";
    cin>>num;
    vector<int> arr;
    cout<<"Enter elements of array: ";
    for(int i=0; i<num; i++){
        int n;
        cin>>n;
        arr.push_back(n);
    }
    moveZeroes(arr);
    cout<<"Array after operation: ";
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}