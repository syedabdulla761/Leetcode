public class Solution {
    public void Rotate(int[] nums, int k) {        
        // Calculate the effective rotation index
        k = k % nums.Length;

        // Create a temporary array to hold the rotated elements
        int[] rotated = new int[nums.Length];

        // Part 1: Take elements from index nums.Length - k to the last index
        Array.Copy(nums, nums.Length - k, rotated, 0, k);

        // Part 2: Take elements from the beginning up to index nums.Length - k and copy to rotated array
        Array.Copy(nums, 0, rotated, k, nums.Length - k);

        // Copy the rotated array back to the original 'nums' array
        Array.Copy(rotated, nums, nums.Length);
    }
}