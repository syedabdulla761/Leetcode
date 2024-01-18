class Solution {
    public boolean containsDuplicate(int[] nums) {
        Map<Integer,Integer> frequencyMap = new HashMap<>();
        for (int num : nums) {
            frequencyMap.put(num, frequencyMap.getOrDefault(num, 0) + 1);
            if(frequencyMap.getOrDefault(num,0)>1)return true;
        }
        return false;
    }
}