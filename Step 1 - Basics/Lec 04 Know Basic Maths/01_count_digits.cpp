#include <bits/stdc++.h>
using namespace std;

int countDigits(long long n){
    int ans = 0;
    while(n){
        ans++;
        n /= 10;
    }
    return ans;
}

int main(){
    long long num;
    cout<<"Enter a number: ";
    cin>>num;

    int digits = countDigits(num);

    cout<<"Your number have total "<<digits<<" digits."<<endl;
    return 0;
}