#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void passByValue(int x) {
        cout<< "Value before change: " << x << endl;
        x += 10;
        cout<< "Value after change: " << x << endl;
    }

    void passByReference(int &x) {
        cout<< "Value before change: " << x << endl;
        x += 10;
        cout<< "Value after change: " << x << endl;
    }

};