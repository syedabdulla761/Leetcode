public class Solution {
    public int[] SortedSquares(int[] nums) {
        return nums.Select(num => (int)Math.Pow(num, 2)).OrderBy(num => num).ToArray();
    }
}