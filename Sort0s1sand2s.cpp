#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    int lo = 0, hi = n-1, mid = 0;
    while(mid<=hi){
        switch(arr[mid]){
            case 0:
                swap(arr[lo++], arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[hi--]);
                break;
        }
    }
}