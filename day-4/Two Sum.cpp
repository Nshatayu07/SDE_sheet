class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=i;
        }
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            v.push_back(i);
            int a = target - nums[i];
            if(m.find(a)!=m.end() and m[a]!=i){
                v.push_back(m[a]);
                return v;
            }
            v.pop_back();
        }
        return v;
    }
};