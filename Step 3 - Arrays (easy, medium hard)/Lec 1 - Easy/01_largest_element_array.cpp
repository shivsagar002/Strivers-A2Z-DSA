#include <bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n){
    int ans = arr[0];
    for(int i=1; i<n; i++){
        ans = max(ans,arr[i]);
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

    int maxElement = largestElement(arr, num);
    cout<<"Largest element is "<<maxElement<<endl;

    return 0;
}