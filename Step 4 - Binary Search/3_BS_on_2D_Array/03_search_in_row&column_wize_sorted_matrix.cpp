// Problem Link : https://leetcode.com/problems/search-a-2d-matrix-ii/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = matrix.size()-1, j = 0;
        while(i>=0 && j<matrix[0].size()){
            if(matrix[i][j]==target) return 1;
            else if(matrix[i][j]>target)i--;
            else j++;
        }
        return 0;
    }
};