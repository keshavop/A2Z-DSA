//codestudio brute approach
int removeDuplicates(vector<int> &arr, int n) {
	set<int> set;
    for(int i=0;i<n;i++){
        set.insert(arr[i]);
    }

    int k = set.size();
    return k;
}

//codestudio optimal
int removeDuplicates(vector<int> &arr, int n) {
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

//leetcode
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;
    }
};