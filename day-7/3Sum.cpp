class Solution {
public:

    void solve(int i, int j, vector<int> nums,vector<vector<int>> &ans, int target){
        int a = nums[i-1];
        while(i<j){
            if(nums[i]+nums[j]<target) i++;
            else if(nums[i]+nums[j]>target) j--;
            else{
                vector<int> v;
                v.push_back(a);
                v.push_back(nums[i]);
                v.push_back(nums[j]);
                ans.push_back(v);

                while(i<j and nums[i]==nums[i+1]) i++;
                while(i<j and nums[j]==nums[j-1]) j--;

                i++;j--;
                
            }
            
        }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size()-2;i++){
            if(i==0 || nums[i]!=nums[i-1]){
                solve(i+1, nums.size()-1,nums, ans,0-nums[i]);
            }
        }
        return ans;
    }
};