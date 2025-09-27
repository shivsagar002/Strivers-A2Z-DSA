#include <bits/stdc++.h>
using namespace std;

void leftRotate(vector<int> &arr){
    reverse(arr.begin(), arr.begin()+1);
    reverse(arr.begin()+1, arr.end());
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
    leftRotate(arr);
    cout<<"";
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}