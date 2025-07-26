// Problem Link : https://www.naukri.com/code360/problems/ninja-and-the-star-pattern-i_6581920?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

// *****
// *   *
// *   *
// *   *
// *****

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            (i==1 || i==n || j==1 || j==n)? cout<<"*" : cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}