//codestudio
string read(int n, vector<int> book, int target)
{
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(book[i]+book[j]==target){
                return "YES";
            }
        }
    }
    return "NO";
}


//leetcode
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int> mpp;

        for(int i=0;i<n;i++){
            int a = nums[i];
            int sum = target -a;
            if(mpp.find(sum)!=mpp.end()){
                return {mpp[sum], i};
            }
            mpp[a] = i;
        }
        return {-1,-1};
    }
};