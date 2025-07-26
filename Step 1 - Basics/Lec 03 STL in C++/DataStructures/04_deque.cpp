//NOTE: In "Deque" random access of elements is allowed.

#include <bits/stdc++.h>
#include <deque>                            //Library
using namespace std;

int main(){
    deque<int> d;         //initilization
    d.push_back(4);
    d.push_front(40);
    d.pop_back();
    d.pop_front();
    return 0;
}