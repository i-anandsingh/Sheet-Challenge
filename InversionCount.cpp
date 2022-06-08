#include <bits/stdc++.h> 
long long merge(long long *arr, long long *tmp, long long lo, long long mid, long long hi){
    long long cnt = 0;
    long long i = lo, j = mid+1, k = lo;
    while(i <= mid and j <= hi){
        if(arr[i] <= arr[j]){
            tmp[k++] = arr[i++];
        } else{
            tmp[k++] = arr[j++];
            cnt += (mid-i+1);
        }
    }
    while(i <= mid) tmp[k++] = arr[i++];
    while(j <= hi) tmp[k++] = arr[j++];
    
    for(int i = lo; i <= hi; i++)
        arr[i] = tmp[i];
    return cnt;
}
long long int mergesort(long long *arr, long long *tmp, long long lo, long long hi){
    long long inv_cnt = 0;
    if(lo < hi){
        long long mid = (lo + hi)/2;
        inv_cnt += mergesort(arr, tmp, lo, mid);
        inv_cnt += mergesort(arr, tmp, mid+1, hi);
        inv_cnt += merge(arr, tmp, lo, mid, hi);
    }
    return inv_cnt;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long tmp[n];
    return mergesort(arr, tmp, 0, n-1);
}