#include <bits/stdc++.h>
using namespace std;

void printString(string str, int cnt, int num){
    if(cnt<num){
        cout<<str<<endl;
        printString(str, cnt+1, num);
    }
}

int main(){
    int num;
    string s;
    cout<<"Enter your string: ";
    getline(cin,s);
    cout<<"Enter number of times you want to print your string: ";
    cin>>num;

    int count = 0;

    printString(s, count, num);

    return 0;
}