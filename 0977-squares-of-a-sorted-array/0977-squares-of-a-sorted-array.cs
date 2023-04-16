public class Solution {
    public int[] SortedSquares(int[] nums) {
        int n = nums.Length;
        int[] res = new int[n];
        int i = 0, j = n - 1;
        for (int k = n - 1; k >= 0; k--) {
            if (Math.Abs(nums[i]) > Math.Abs(nums[j])) {
                res[k] = nums[i] * nums[i];
                i++;
            } else {
                res[k] = nums[j] * nums[j];
                j--;
            }
    }
    return res;
    }
}