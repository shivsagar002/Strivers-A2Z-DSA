// Problem Link : https://www.naukri.com/code360/problems/ninja-and-the-number-pattern-i_6581959?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int l = n*2 -1;

    for(int i=0; i<l; i++){
        for(int j=0; j<l; j++){
            int base = min(l-1-i,min(l-1-j,min(i-0,j-0)));
            cout<<n-base;
        }
        cout<<endl;
    }
    return 0;
}