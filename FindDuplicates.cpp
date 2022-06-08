#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// this method is generally not allowed in interview bcz of the array modification issue
    for(int i = 0; i < n; i++){
        if(arr[abs(arr[i])-1] > 0)
            arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
        else return abs(arr[i]);
    }
    return 0;
}

int findDuplicate(vector<int> &arr, int n){
    int slow = nums[0];
    int fast = nums[nums[0]];
    while(slow != fast){
        slow = nums[slow];
        fast = nums[nums[fast]];
    }
    slow = 0;
    while(slow != fast){
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}