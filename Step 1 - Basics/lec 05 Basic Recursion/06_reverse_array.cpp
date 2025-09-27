#include <bits/stdc++.h>
using namespace std;

void printArray(int n, int arr[]){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArray(int s, int e, int arr[]){
    if(s<e){
        swap(arr[s], arr[e]);
        reverseArray(s+1, e-1, arr);
    }
}

int main(){
    int num;
    cout<<"Enter number of elements in array: ";
    cin>>num;
    int arr[num];
    cout<<"Enter your elements of array: ";
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }

    cout<<"Your array : ";
    printArray(num, arr);

    reverseArray(0, num-1, arr);

    cout<<endl<<"Your array after reversal : ";
    printArray(num, arr);

    return 0;
}