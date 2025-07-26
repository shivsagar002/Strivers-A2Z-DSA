//NOTE: Unique element and modification is not alowed (sorted order)

#include <bits/stdc++.h>
#include <set>                            //Library
using namespace std;

int main(){
    set<int> s;                         //initilization
    s.insert(4);                        //To push element
    s.erase(s.begin());                 //to erase first element
    s.count(5);                         //element is in or not
    s.find(10);                         //return iterator of 10
    return 0;
}