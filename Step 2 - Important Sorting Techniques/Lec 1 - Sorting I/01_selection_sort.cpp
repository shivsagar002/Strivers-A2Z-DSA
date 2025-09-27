#include <bits/stdc++.h>
using namespace std;

void printElement(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[minIndex]>arr[j]) minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
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

    selectionSort(arr, num);

    cout<<"Array after sorting :";
    printElement(arr, num);

    return 0;
}