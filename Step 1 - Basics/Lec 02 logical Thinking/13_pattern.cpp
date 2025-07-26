// Problem Link : https://www.naukri.com/code360/problems/increasing-number-triangle_6581893?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int cnt = 1;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<cnt++<<" ";
        }
        cout<<endl;
    }
}