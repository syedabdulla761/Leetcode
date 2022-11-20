class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> x;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val)
                x.push_back(nums[i]);
        }
        nums=x;
        return nums.size();
    }
};