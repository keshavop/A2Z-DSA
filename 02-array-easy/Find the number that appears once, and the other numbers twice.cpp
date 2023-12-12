//codestudio
#include<vector>
#include<map>
int getSingleElement(vector<int> &arr){
	
	int n = arr.size();
	map<int,int> mpp;

	for(int i=0;i<n;i++){
		mpp[arr[i]]++;
	}

	for(auto it:mpp){
		if(it.second ==1){
			return it.first;
		}
	}
	return -1;
}


//leetcode
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = ans ^ nums[i];
        }
        return ans;
    }
};

//leetcode
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        
        map<int,int> mpp;

        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }

        for(auto it:mpp){
            if(it.second == 1){
                return it.first;
            }
        }

        return -1;
    }
};