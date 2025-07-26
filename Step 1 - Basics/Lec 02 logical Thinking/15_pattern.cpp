// Problem Link : https://www.naukri.com/code360/problems/reverse-letter-triangle_6581906?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

// ABCDE
// ABCD
// ABC
// AB
// A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=n; i>0; i--){
        char ch = 'A';
        for(int j=0; j<i; j++){
            cout<<ch++;
        }
        cout<<endl;
    }
}