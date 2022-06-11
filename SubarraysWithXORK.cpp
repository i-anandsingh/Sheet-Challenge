int Solution::solve(vector<int> &A, int b) {
    unordered_map<int, int> m;
    int cnt = 0, xr = 0;
    for(auto &ele : A){
        xr ^= ele;
        if(xr == b){
            cnt++;
        }
        if(m.count(xr^b)){
            cnt += m[xr^b];
        }
        m[xr] += 1;
    }
    return cnt;
}
