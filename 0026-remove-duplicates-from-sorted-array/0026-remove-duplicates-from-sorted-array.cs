public class Solution {
    public int RemoveDuplicates(int[] nums) {
       var set=new HashSet<int>(nums);
        int i=0;
        foreach(var num in set){
            nums[i]=num;
            i++;
        }
        Array.Resize(ref nums,set.Count);
        return nums.Length;
    }
}