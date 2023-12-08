//codestudio brute approach
#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1] = temp;
return arr;
}

//codestudio efficient approach
vector<int> rotateArray(vector<int>& arr, int n) {
    vector<int> temp(n);
    for(int i=1;i<n;i++){
        temp[i-1] = arr[i];
    }
    temp[n-1] = arr[0];
    return temp;
}
