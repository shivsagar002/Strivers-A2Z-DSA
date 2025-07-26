// Problem Link : https://www.naukri.com/code360/problems/star-triangle_6573671?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

//     *
//    ***
//   *****
//  *******
// *********

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<i*2; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}