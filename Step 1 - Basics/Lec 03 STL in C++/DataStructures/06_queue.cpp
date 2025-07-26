//NOTE: Queue is of FIFO order

#include <bits/stdc++.h>
#include <queue>                            //Library
using namespace std;

int main(){
    queue<string> q;         //initilization
    q.push("Shiv");
    q.pop();
    q.front();
    q.back();
    return 0;
}