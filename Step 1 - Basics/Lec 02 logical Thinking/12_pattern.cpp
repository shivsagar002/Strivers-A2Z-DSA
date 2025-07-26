// Problem Link : https://www.naukri.com/code360/problems/number-crown_6581894?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        for(int j=1; j<=(n-i)*2; j++){
            cout<<" ";
        }
        for(int j=i; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }
}