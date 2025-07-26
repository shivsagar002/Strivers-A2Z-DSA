#include <bits/stdc++.h>
using namespace std;

int count_digit(int n){
    int ans = 0;
    while(n){
        ans++;
        n /= 10;
    }
    return ans;
}

bool check_armstrong(int n){
    int n2 = 0, n1 = n;
    int digit = count_digit(n);
    while(n){
        int last_digit = n % 10;
        cout<<last_digit<<" "<<digit<<" "<<pow(last_digit, digit)<<endl;
        n2 += pow(last_digit, digit);
        n /= 10;
        cout<<n2<<endl;
    }
    if(n1==n2) return 1;
    return 0;
}

bool armstrong(int n){  
    // converting to string
    string number = to_string(n);

    n = number.length();
    int output = 0;
    for (char i : number)
        output = output + (int)pow((i - '0'), n);
        
    // check if equal to number
    if (output == stoi(number))
        return true;
    else
        return false;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    (check_armstrong(num)) ? cout<<"Your number is an armstrong number.": cout<<"Your number is not an armstrong number.";

    return 0;
}