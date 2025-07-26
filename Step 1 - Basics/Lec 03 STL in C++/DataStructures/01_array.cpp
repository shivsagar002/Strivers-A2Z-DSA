#include <bits/stdc++.h>
#include <array>                            //Library
using namespace std;

int main(){
    array<int, 4> a = {1, 2, 3, 4};         //initilization
    cout<<a.at(2);                          //2nd index element
    cout<<a.empty();                        //empty or not
    cout<<a.front();                        //1st element
    cout<<a.back();                         //last element
    return 0;
}