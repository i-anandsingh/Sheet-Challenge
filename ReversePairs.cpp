int mergeSort(vector<int> &arr, int lo, int mid, int hi){
    int total = 0;
    int j = mid+1, i = lo;
    while(i <= mid){
        while(j <= hi and nums[i] > 2*nums[j]){
            j++;
        }
        total += (j-mid+1);
    }

    int i = lo, j = mid+1;
    vector<int> t;
    while(i <= mid and j <= hi){
        if(nums[i] <= nums[j])
            t.push_back(nums[i++]);
        else
            t.push_back(nums[j++]);
    }

    while(i <= mid)
        t.push_back(nums[i++]);
    while(j <= hi)
        t.push_back(nums[j++]);

    for(int i = lo; i <= hi; i++){
        nums[i] = t[i-lo];
    }
    return total;
}

int merge(vector<int> &arr, int lo, int hi){
    int inv_cnt = 0;
    if(lo < hi){
        int mid = (lo+hi)/2;
        inv_cnt += merge(arr, lo, mid);
        inv_cnt += merge(arr, mid+1, hi);
        inv_cnt += mergeSort(arr, lo, mid, hi);
    }
    return inv_cnt;
}
int reversePairs(vector<int> &arr){
    return merge(arr, 0, arr.size()-1);
}