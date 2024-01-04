class Solution {
    public boolean judgeCircle(String moves) {
        Map<Character, Integer> frequencyMap = new HashMap<>();
        
    for( char c : moves.toCharArray()){
        if ( Character.isLetter(c)){
            frequencyMap.put(c, frequencyMap.getOrDefault(c, 0) + 1);
        }
    }
    
    int value = Math.abs(frequencyMap.getOrDefault('R', 0)- frequencyMap.getOrDefault('L', 0)) + Math.abs(frequencyMap.getOrDefault('D', 0)- frequencyMap.getOrDefault('U', 0));
        
        return value!=0? false : true;
    }
}