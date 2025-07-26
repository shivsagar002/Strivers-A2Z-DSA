//NOTE: (~Heap) First element is greater

#include <bits/stdc++.h>
#include <queue>                            //Library
using namespace std;

int main(){
    priority_queue<int> maxi;                                    //max heap
    priority_queue<int, vector<int>, greater<int>> mini;         //min heap
    maxi.push(4);
    maxi.pop();
    maxi.top();
    return 0;
}