#include <bits/stdc++.h>
using namespace std;

int sumToN(int num){
    if(num>0){
        num += sumToN(num-1);
    }
    return num;
}

int main(){
    
    int num;
    cout<<"Enter a num: ";
    cin>>num;

    cout<<"Sum : "<<sumToN(num);
    return 0;
}