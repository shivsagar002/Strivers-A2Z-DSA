// Problem Link : https://leetcode.com/problems/palindrome-number/description/

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

    int reverse = reverse_number(num);
    (reverse==num)?cout<<"Your number is palindrome":cout<<"Your number is not a palindrome";

    return 0;
}