class Solution {
public:

    void solve(vector<int> nums, set<vector<int>> &ans, vector<int> v, int i){
        if(i>=nums.size()){
            sort(v.begin(), v.end());
            ans.insert(v);
            return ;
        }

        solve(nums, ans, v, i+1);

        int a = nums[i];
        v.push_back(a);
        solve(nums, ans, v, i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> v;
        int i=0;
        solve(nums, ans, v, i);

        vector<vector<int>> res;
        for(auto i:ans){
            res.push_back(i);
        }
        // sort(res.begin(), res.end());
        return res;
    }
};