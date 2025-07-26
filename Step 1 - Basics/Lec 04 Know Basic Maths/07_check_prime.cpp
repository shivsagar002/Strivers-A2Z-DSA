#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n){ 
    int cnt = 0;
    for(int i = 1; i <= sqrt(n); i++){ 
        if(n % i == 0){ 
            cnt++;
            if(i != sqrt(n)){
                cnt++;
            }
        }
    }
    if(cnt == 2)
        return true;
    else
        return false; 
}


int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    (checkPrime(num)) ? cout<<"Your number is prime": cout<<"Your number is composite";
    return 0;
}