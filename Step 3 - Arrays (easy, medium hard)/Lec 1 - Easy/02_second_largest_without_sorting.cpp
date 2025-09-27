#include <bits/stdc++.h>
using namespace std;

int secondLargestElement(int arr[], int n){
    int large = max(arr[0], arr[1]);
    int ans = min(arr[0], arr[1]);
    for(int i=2; i<n; i++){
        if(arr[i]>large){
            ans = large;
            large = arr[i];
        }
        else{
            ans = max(arr[i], ans);
        }
    }
    return ans;
}

int main(){
    int num;
    cout<<"Enter number of elements: ";
    cin>>num;
    int arr[num];
    cout<<"Enter elements of array: ";
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }

    int secLargestElement = secondLargestElement(arr, num);
    cout<<"Second Largest element is "<<secLargestElement<<endl;

    return 0;
}