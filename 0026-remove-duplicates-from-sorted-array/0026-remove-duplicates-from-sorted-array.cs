public class Solution {
    public int RemoveDuplicates(int[] nums) {
        Dictionary<int,int> map=new Dictionary<int,int>();
        for(int i=0;i<nums.Length;i++){
            map[nums[i]]=1;
        }
        for(int i=0;i<map.Count;i++){
            nums[i]=map.Keys.ElementAt(i);
        }
        Array.Resize(ref nums,map.Count);
        return nums.Length;
    }
}