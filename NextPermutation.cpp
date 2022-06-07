void nextPerm(vector<int> &arr){
    int i, k;
    for(i = n-2; i >= 0; i--){
        if(arr[i] < arr[i+1])
            break;
    }
    if(i < 0){
        reverse(arr.begin(), arr.end());
    } else{
        for(k = n-1; k > i; k--){
            if(arr[i] < arr[k])
                break;
        }
        swap(arr[i], arr[k]);
        reverse(arr.begin()+i+1, arr.end());
    }
}