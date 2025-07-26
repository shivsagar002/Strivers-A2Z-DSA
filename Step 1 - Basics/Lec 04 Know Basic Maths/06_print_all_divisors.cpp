#include <bits/stdc++.h>
using namespace std;

void printAllDivisors(int n){
    cout<<"All divisors of "<<n<<" are: ";
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i != sqrt(n)) cout<<n/i<<" ";
        } 
    }
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    printAllDivisors(num);
    return 0;
}