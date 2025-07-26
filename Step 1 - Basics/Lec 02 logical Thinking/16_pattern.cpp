// Problem Link : https://www.naukri.com/code360/problems/alpha-ramp_6581888?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

// A
// BB
// CCC 
// DDDD
// EEEEE 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
    return 0;
}