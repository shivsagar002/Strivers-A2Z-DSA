// Problem Link : https://leetcode.com/problems/find-a-peak-element-ii/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int start = 0, end = mat.size(), mid;
        while(start<=end){
            mid = start + (end-start)/2;
            int max_element = mat[mid][0], ind = 0;
            for(int i=1; i<mat[0].size(); i++){
                if(mat[mid][i]>max_element){
                    max_element = mat[mid][i];
                    ind = i;
                }
            }
            if(mid!=0 && mat[mid-1][ind]>max_element) end = mid-1;
            else if(mid!=mat.size()-1 && mat[mid+1][ind]>max_element) start = mid+1;
            else return {mid,ind};
        }
        return {-1,-1};
    }
};