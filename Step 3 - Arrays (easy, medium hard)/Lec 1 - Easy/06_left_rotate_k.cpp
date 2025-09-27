#include <bits/stdc++.h>
using namespace std;

void leftRotate(vector<int> &arr, int k){
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.end());
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
    int k;
    cout<<"You want to left rotate by?(enter a number): ";
    cin>>k;
    leftRotate(arr, k%num);
    cout<<"";
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}