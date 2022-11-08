class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        vector<int>::iterator it;
        int x=0;
        for(int i=0;i<nums.size();i++){
            x=target-nums[i];
            it=find(nums.begin()+i+1,nums.end(),x);
            if(it-nums.begin()!=nums.size())
            {
                ans.push_back(i);
                ans.push_back(it-nums.begin());
                break;
            }
        }
        return ans;
    }
};