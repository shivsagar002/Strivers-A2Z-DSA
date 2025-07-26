// Problem Link : https://www.naukri.com/code360/problems/increasing-letter-triangle_6581897?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

// A
// AB
// ABC
// ABCD
// ABCDE

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=0; i<n; i++){
        char ch = 'A';
        for(int j=0; j<=i; j++){
            cout<<ch++;
        }
        cout<<endl;
    }
}
