// Problem Link : https://leetcode.com/problems/search-a-2d-matrix/submissions/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int start = 0, end = (m*n)-1, mid;
        while(start <= end){
            mid = start + (end-start)/2;
            int i = mid/n, j = mid%n;
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j] > target) end = mid-1;
            else start = mid + 1;
        }
        return 0;
    }
};