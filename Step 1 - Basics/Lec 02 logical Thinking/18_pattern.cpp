// Problem Link : https://www.naukri.com/code360/problems/alpha-triangle_6581429?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

// for(int i=1; i<=n; i++){
//     char ch = 'A'+ n - 1;
//     for(int j=0; j<i; j++){
//         cout<<ch--<<" ";
//     }
//     cout<<endl;
// }

// E
// D E 
// C D E 
// B C D E
// A B C D E

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        char ch = 'A'+ n - i;
        for(int j=0; j<i; j++){
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
    return 0;
}