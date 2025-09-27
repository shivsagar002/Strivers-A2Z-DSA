#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

// when unequal positives and negatives
vector<int> RearrangebySign(vector<int> A, int n){
    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < n; i++){
        if (A[i] > 0)
            pos.push_back(A[i]);
        else
            neg.push_back(A[i]);
    }
    if (pos.size() < neg.size()){
        for (int i = 0; i < pos.size(); i++){
            A[2 * i] = pos[i];
            A[2 * i + 1] = neg[i];
        }
        int index = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++){
            A[index] = neg[i];
            index++;
        }
    }
    else{
        for (int i = 0; i < neg.size(); i++){
            A[2 * i] = pos[i];
            A[2 * i + 1] = neg[i];
        }
        int index = neg.size() * 2;
        for (int i = neg.size(); i < pos.size(); i++){

            A[index] = pos[i];
            index++;
        }
    }
    return A;
}

// When equal positive and negative
vector<int> rearrangeArray(vector<int> &nums){
    vector<int> ans(nums.size(), 0);
    int pos = 0, neg = 1;
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] > 0){
            ans[pos] = nums[i];
            pos += 2;
        }
        else{
            ans[neg] = nums[i];
            neg += 2;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {3, -2, -5, 7, 8, 9, -6, -8};
    cout << "Your array: ";
    printArray(arr);
    vector<int> ans = rearrangeArray(arr);
    cout << "Sorted array: ";
    printArray(arr);
    return 0;
}