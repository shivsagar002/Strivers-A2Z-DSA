#include <bits/stdc++.h>
using namespace std;

void printToN(int curr, int num){
    if(curr<=num){
        cout<<curr++<<" ";
        printToN(curr, num);
    }
}

int main(){
    int num;
    cout<<"Enter a number greater than 0: ";
    cin>>num;

    printToN(1, num);
    return 0;
}