#include <bits/stdc++.h>
using namespace std;

void printElement(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i=low, j=high;
    while(i<j){
        while(arr[i] <= pivot && i <= high-1) i++;
        while(arr[j] > pivot && j >= low+1) j--;
        //help to arrange smaller element to left and larger to right of pivot element
        if(i<j) swap(arr[i], arr[j]);  
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high){
    if(low<high){
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex-1);  //left side
        quickSort(arr, pivotIndex+1, high);  //right side
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

    quickSort(arr, 0, num-1);

    cout<<"Array after sorting :";
    printElement(arr, num);

    return 0;
}