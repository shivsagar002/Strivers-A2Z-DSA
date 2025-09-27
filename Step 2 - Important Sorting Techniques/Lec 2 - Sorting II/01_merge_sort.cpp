#include <bits/stdc++.h>
using namespace std;

void printElement(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int arr[], int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(arr[left]<=arr[right]) temp.push_back(arr[left++]);
        else temp.push_back(arr[right++]);
    }

    while(left <= mid) temp.push_back(arr[left++]);
    while(right <= high) temp.push_back(arr[right++]);

    for(int i=low; i<=high; i++){
        arr[i]= temp[i-low];
    }
}

void mergeSort(int arr[], int low, int high){
    if(low>=high) return;
    int mid = (low+high)/2;
    mergeSort(arr, low, mid);  //left half
    mergeSort(arr, mid+1, high);  //right half
    merge(arr, low, mid, high);  //merge
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

    cout<<"Array before sorting :";
    printElement(arr, num);

    mergeSort(arr, 0, num-1);

    cout<<"Array after sorting :";
    printElement(arr, num);

    return 0;
}