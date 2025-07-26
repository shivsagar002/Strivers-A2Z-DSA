#include <bits/stdc++.h>
#include <vector>                            //Library
using namespace std;

int main(){
    vector <int> v(4,0);                    //initilization
    v.push_back(4);                         //pust at end
    v.insert(v.begin()+1, 40);              //insert 40 at 1st index
    v.pop_back();                           //pop element from end;
    v.erase(v.begin()+1);                   //erase element from 1st index
    v.clear();                              //clear vector & make it empty
    v.size();                               //how many elements are present
    v.capacity();                           //how many elements can present
    vector <int> v2(v);                     //copying elements of v into v2

    //Iterate in a vector
    //v.begin(), v.end(), virbegin(); v.rend();

    //sorting elements
    sort(v.begin(), v.end());                   //Increasing order
    sort(v.begin(), v.end(), greater<int>());   //Desreasing order
    
    return 0;
}