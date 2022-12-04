class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            if(ans.count(target-nums[i]))
                return {ans[target-nums[i]],i};
            ans[nums[i]]=i;
        }
        return {};
    }
};