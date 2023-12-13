// leetcode
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[count]);
                count++;
            }
        }
    }
};

//codestudio
vector<int> moveZeros(int n, vector<int> a) {
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[count]);
            count++;
        }
    }
    return a;
}
