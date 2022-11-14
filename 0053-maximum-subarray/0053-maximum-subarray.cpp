class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int lmax=0,amax=INT_MIN;
        for(int i=0;i<nums.size();i++){
            lmax+=nums[i];
            if(lmax>amax)
                amax=lmax;
            if(lmax<0)
                lmax=0;
        }
        return amax;
    }
};