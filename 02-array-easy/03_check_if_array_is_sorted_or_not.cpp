//codestudio
int isSorted(int n, vector<int> a) {
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1]){

        }
        else{
            return 0;
        }
    }
    return 1;
}

//codestudio
int isSorted(int n, vector<int> a) {
    for(int i=0;i<n-1;i++){
        if(a[i+1]<a[i]){
            return false;
        }
    }
    return true;
}

//leetcode
