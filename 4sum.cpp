vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> ans;
    vector<int> res[4];   
    int n = nums.size();   
    sort(nums.begin(), nums.end());
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int left = j+1, right = n-1;
            int t = target - nums[i] - nums[j];
            while(left < right){
                if(nums[left] + nums[right] == target){
                    res[0] = nums[i];
                    res[1] = nums[j];
                    res[2] = nums[left];
                    res[3] = nums[right];
                    ans.push_back(res);
                    res.clear();
                    while(left < right and nums[left] == res[2])   left++;
                    while(right > left and nums[right] == res[3])    right--;
                }
                if(nums[left] + nums[right] < t)    left++;
                else right++;
            }
            while(j+1 < n and nums[j] == nums[j+1])   j++;
        }
        while(i+1 < n and nums[i] == nums[i+1])   i++;
    }
    return ans;
}