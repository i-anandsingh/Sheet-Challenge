#include <bits/stdc++.h> 
#include <vector>
bool findTargetInMatrix(vector < vector < int >> & mat, int n, int m, int target){
    int lo = 0, hi = n*m-1;
    while(lo <= hi){
        int mid = (lo + ((hi-lo)/2));
        if(mat[mid/m][mid%m] == target)
            return true;
        if(mat[mid/m][mid%m] < target)    lo = mid+1;
        else hi = mid-1;
    }
    return false;
}