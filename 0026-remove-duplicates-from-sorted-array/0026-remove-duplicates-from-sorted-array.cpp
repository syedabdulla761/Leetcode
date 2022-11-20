class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> x;
        for(int i=0;i<nums.size();i++){
            x[nums[i]]++;
        }
        int i=0;
        for(auto it:x){
            nums[i]=it.first;
            i++;
        }
        return x.size();
    }
};