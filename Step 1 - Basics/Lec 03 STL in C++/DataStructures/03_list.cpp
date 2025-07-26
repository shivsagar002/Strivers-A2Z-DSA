//NOTE: In "List" random access of elements not allowed.

#include <bits/stdc++.h>
#include <list>                            //Library
using namespace std;

int main(){
    list<int> l;         //initilization
    l.push_back(4);
    l.push_front(40);
    l.pop_back();
    l.pop_front();
    return 0;
}