#include <bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[], int n){
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]) return 0;
    }
    return 1;
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

    (checkSorted(arr,num)) ? cout<<"Array is sorted":cout<<"Array is not sorted";

    return 0;
}