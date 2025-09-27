#include <bits/stdc++.h>
using namespace std;

void printElement(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int key = arr[i];
        for(int j=i-1; j>=0; j--){
            if(arr[j]>key) arr[j+1]=arr[j];
            else{
                arr[j+1]=key;
                break;
            }
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

    insertionSort(arr, num);

    cout<<"Array after sorting :";
    printElement(arr, num);

    return 0;
}