#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    int n = arr.size();
    int ele1 = -1, ele2 = -1, c1 = 0, c2 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == ele1)    c1++;
        else if(arr[i] == ele2)    c2++;
        else if(c1 == 0){
            ele1 = arr[i];
            c1 = 1;
        }    
        else if(c2 == 0){
            ele2 = arr[i];
            c2 = 1;
        }    
        else{
            c1--, c2--;
        }
    }
    c1 = c2 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == ele1)    c1++;
        else if(arr[i] == ele2)    c2++;
    }
    vector<int> ans;
    if(c1 > n/3)    ans.push_back(ele1);
    if(c2 > n/3)    ans.push_back(ele2);
    return ans;
}