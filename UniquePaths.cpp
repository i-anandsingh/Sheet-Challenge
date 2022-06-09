int uniquePaths(int n, int m){
    //bottom up approach 
    vector<vector<int>> dp(n, vector<int> (m,1));
    for(int i = n-2; i >= 0; i--){
        for(int j = m - 2; j >= 0; j--){
            dp[i][j] = dp[i+1][j] + dp[i][j+1];
        }
    }
    return dp[0][0];
}

int uniquePaths(int n, int m){
    vector<int> prev(n,1), curr(n,1);
    for(int i = n-2; i >= 0; i--){
        for(int j = m - 2; j >= 0; j--){
            curr[j] = prev[j] + curr[j+1];
        }
        swap(prev, curr);
    }
    return prev[0];
}

int uniquePaths(int n, int m){
    vector<int> curr(n,1);
    for(int i = n-2; i >= 0; i--){
        for(int j = m - 2; j >= 0; j--){
            curr[j] += curr[j+1];
        }
    }
    return curr[0];
}