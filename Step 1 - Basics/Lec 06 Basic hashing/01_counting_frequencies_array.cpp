#include <bits/stdc++.h>
using namespace std;
 
void Frequency(int arr[], int n)
{
    unordered_map<int, int> map;
 
    for (int i = 0; i < n; i++)
        map[arr[i]]++;
 
    for (auto x : map)
        cout << x.first << " " << x.second << endl;
}
 
int main()
{
    int num;
    cout<<"Enter number of elements of array:";
    cin>>num;
    int arr[num];
    cout<<"Enter elements of array:";
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    return 0;
}