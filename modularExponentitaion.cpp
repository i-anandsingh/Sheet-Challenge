#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
    int res = 1;
    x %= m;
    while(n){
        if(n&1) res = (res * (long long)x)%m;
        x = ((long long)x*(long long)x)%m;
        n /= 2;
    }
    res += m;
    return res%m;
}