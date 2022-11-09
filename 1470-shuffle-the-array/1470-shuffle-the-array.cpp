class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> y;
        for(int i=nums.size()/2;i<nums.size();i++){
            y.push_back(nums[i]);
        }
        nums.erase(nums.begin()+nums.size()/2,nums.end());
        int j=0;
        for(int i=1;i<=nums.size();i++){
            if(i%2!=0)
            {    nums.insert(nums.begin()+i,y[j]);
                j++;
            }
        }
        return nums;
    }
};