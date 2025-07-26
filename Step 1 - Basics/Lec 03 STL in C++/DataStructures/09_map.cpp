//NOTE: Key & value pair, keys are unique but values can be duplicate (keys are in sorted order)

#include <bits/stdc++.h>
#include <map>                            //Library
using namespace std;

int main(){
    map<int, string> m;         //initilization
    m[1] = "Shiv";
    m.insert({5, "Sagar"});     //inser into map
    m.erase(5);                 //erase by key
    return 0;
}