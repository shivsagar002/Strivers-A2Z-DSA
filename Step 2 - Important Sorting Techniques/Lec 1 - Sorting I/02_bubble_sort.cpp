#include <bits/stdc++.h>
using namespace std;

void printElement(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
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

    bubbleSort(arr, num);

    cout<<"Array after sorting :";
    printElement(arr, num);

    return 0;
}