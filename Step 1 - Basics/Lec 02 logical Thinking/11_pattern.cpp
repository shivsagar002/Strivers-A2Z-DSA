// Problem Link : https://www.naukri.com/code360/problems/binary-number-triangle_6581890?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            ((i+j)%2==0)?cout<<"1 ":cout<<"0 ";
        }
        cout<<endl;
    }
}