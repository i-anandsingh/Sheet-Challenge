#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long ans = 0, best = INT_MIN;
    for(int i = 0; i < n; i++){
        best = max((long long)arr[i], best+arr[i]);
        ans = max(ans, best);
    }
    return ans;
}