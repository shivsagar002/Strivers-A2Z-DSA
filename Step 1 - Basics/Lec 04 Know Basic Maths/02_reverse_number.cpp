// Problem link : https://leetcode.com/problems/reverse-integer/description/

#include <bits/stdc++.h>
using namespace std;

int reverse_number(int n){
    int ans = 0;
    while(n){
        int last_digit = n%10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10) return 0;
        ans = (ans*10) + last_digit;
        n /= 10;
    }
    return ans;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    cout<<"Reverse of your number("<<num<<") is "<<reverse_number(num)<<endl;
    return 0;
}