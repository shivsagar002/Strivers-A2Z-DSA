#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int size){
    int i=0;
    for(int j=1; j<size; j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}

int main(){
    int arr[10]={0,1,1,2,2,2,3,3,4,4};
    int elements = removeDuplicates(arr, 10);
    cout<<"Elmnents after removing duplicate: ";
    for(int i=0; i<elements; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}