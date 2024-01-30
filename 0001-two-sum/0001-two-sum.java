class Solution {
    public int[] twoSum(int[] nums, int target) {
        int num1=-1, num2=-1;
        int j=nums.length-1;
        int[] copyArray = Arrays.copyOf(nums,nums.length);
        Arrays.sort(nums);
        if(nums.length==2)return new int[]{0, 1};;
        for(int i=0; i< nums.length ;){
            if(nums[j]+nums[i]==target){
                num1=nums[i];
                num2=nums[j];
                break;
            }            
            if( nums[j]+nums[i]>target )j--;
            else if(nums[i]+nums[j]<target)i++;
        }
        for(int i=0; i< nums.length ; i++){
            if(num1==copyArray[i]){
                num1=i;
                break;
            }
        }
        for(int i=0; i< nums.length ; i++){
            if(num2==copyArray[i] && i!=num1){
                num2=i;
                break;
            }
        }
        return new int[]{num1, num2};
    }
}