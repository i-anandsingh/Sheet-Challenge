vector<int> twoSum(vector<int>& arr, int s) {
    unordered_map<int, int> u;
    vector<int> ans;
    for(int i = 0; i < arr.size(); i++){
        if(u.find(s-arr[i]) != u.end()){
            ans.push(u[s-arr[i]]);
            ans.push(i);
            break;
        } else{
            u[arr[i]] = i;
        }
    }
    return ans;
}