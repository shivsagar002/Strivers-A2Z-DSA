#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]==n) return i;
    }
    return -1;
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
    int n;
    cout<<"Enter number you want to search in array: ";
    cin>>n;
    int index = LinearSearch(arr, n);
    cout<<"Your element is on index: "<<index<<endl;

    return 0;
}