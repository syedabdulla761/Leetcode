class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0,i;
        for(i=0;i<nums.size();i++){
            if(i!=nums[i])
            {
                ans=i;
                break;
            }
        }
        return i=nums.size()?i:ans;
    }
};