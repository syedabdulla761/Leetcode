public class Solution {
    public int Search(int[] nums, int target) {
        int mid=nums.Length/2,high=nums.Length-1,low=0;
        while(low<=high){
            if(nums[mid]==target)return mid;
            if(nums[mid]>target){
                high=mid-1;
                mid=(low+high)/2;
            }
            if(nums[mid]<target){
                low=mid+1;
                mid=(low+high)/2;
            }
        }
        return -1;
    }
}