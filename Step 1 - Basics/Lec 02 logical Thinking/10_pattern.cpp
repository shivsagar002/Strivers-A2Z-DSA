// Problem Link : https://www.naukri.com/code360/problems/rotated-triangle_6573688?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}