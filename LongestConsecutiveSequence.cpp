int longestConsecutive(vector<int>& nums) {
    unordered_set<int> s;
    for(int &ele: nums){
        s.insert(ele);
    }
    int ans = 0;
    for(int &ele: nums){
        if(!s.count(ele-1)){
            s.insert(ele);
            int currNum = ele;
            int streak = 1;
            while(s.count(currNum+1)){
                ++currNum;
                ++streak;
            }
            ans = max(ans, streak);
        }
    }
    return ans;     
}