#include <bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2){
    if(n1==0) return n2;
    if(n2==0) return n1;

    if(n1>n2) gcd(n1-n2, n2);
    else gcd(n2-n1, n1);
}

int lcm(int n1, int n2){
    // int n = gcd(n1, n2);
    // long long ans = n1*n2;
    // for(int i=2; i<=n; i++){
    //     if(n1%i==0 && n2%i==0) ans /= i;
    // }
    // return (int)ans;

    int g = max(n1, n2);
    
    int s = min(n1, n2);
    
    for (int i = g; i <= n1 * n2; i += g) {
        if (i % s == 0)
            return i;
    }
}

int main(){
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    cout<<"GDG and HCF your numbers are "<<gcd(num1,num2)<<" and "<<lcm(num1,num2)<<endl;
    return 0;
}