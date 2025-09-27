#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int s, int e, string str){
    if(s>=e) return true;
    if(tolower(str[s]) != tolower(str[e])) return 0;

    return isPalindrome(s+1, e-1, str);
}

int main(){
    string str;
    cout<<"Enter your string: ";
    getline(cin, str);
    
    (isPalindrome(0, str.size()-1, str))?cout<<"String is palindrome" : cout<<"String is not palindrome";

    return 0;
}