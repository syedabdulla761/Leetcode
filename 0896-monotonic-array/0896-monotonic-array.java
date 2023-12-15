class Solution {
    public boolean isMonotonic(int[] nums) {
        if(nums.length==1)return true;
        int i=0;
        for(;i<nums.length-1;i++){
            if(nums[i]==nums[i+1]){
                continue;
            }else break;
        }
        System.out.println(i);
        if(i==nums.length-1)return true;
        
        if (nums[i] > nums[i+1]){
            for(;i<nums.length-1;i++){
                if(nums[i]<nums[i+1]){
                    return false;
                }
            }
        }else{
             for(;i<nums.length-1;i++){
                if(nums[i]>nums[i+1]){
                    return false;
                }
            }
        }
        return true;
    }
}