public class Solution {
    public int[] TwoSum(int[] nums, int target) {
       Dictionary<int,int> ans=new Dictionary<int,int>();
       for(int i=0;i<nums.Length;i++){
           if(ans.TryGetValue(target-nums[i],out int index)){
               return new int[]{i,index};
           }else ans[nums[i]]=i;
       }
       return new int[]{};
    }
}