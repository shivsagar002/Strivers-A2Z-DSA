#include <bits/stdc++.h>
using namespace std;

void printNto1(int num){
    if(num>0){
        cout<<num--<<" ";
        printNto1(num);
    }
}

int main(){
    int num;
    cout<<"Enter a number greater than 0: ";
    cin>>num;

    printNto1(num);
    return 0;
}