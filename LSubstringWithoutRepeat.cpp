int lengthOfLongestSubstring(string s) {
    int ans = 0;
    unordered_map<int, int> m;
    for(int i = 0, j = 0; j < s.size(); j++){
        if(m.count(s[j]))
            i = max(i, m[s[j]]+1);
        m[s[j]] = j;
        ans = max(ans, j-i+1);
    }
    return ans;
}