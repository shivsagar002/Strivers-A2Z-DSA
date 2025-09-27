#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n>1){
        n *= factorial(n-1);
    }
    return n;
}

int main(){
    
    int num;
    cout<<"Enterv a num: ";
    cin>>num;

    cout<<"Factorial of "<<num<<" is : "<<factorial(num);
    return 0;
}