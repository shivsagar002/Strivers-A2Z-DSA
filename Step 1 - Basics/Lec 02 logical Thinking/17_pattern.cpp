// Problem Link : https://www.naukri.com/code360/problems/alpha-hill_6581921?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        char ch = 'A'-1;
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<i*2; j++){
            if(j<=i) cout<<++ch;
            else cout<<--ch;
        }
        cout<<endl;
    }
    return 0;
}