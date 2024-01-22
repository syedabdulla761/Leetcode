class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length())return false;
        Map<Character,Integer> sfreq= new HashMap<>();
        for(char c: s.toCharArray()){
            sfreq.put(c, sfreq.getOrDefault(c, 0 )+1);
        }
        for(char c: t.toCharArray()){
            sfreq.put(c, sfreq.getOrDefault(c, 0 )-1);
            if(sfreq.get(c)==0){
                sfreq.remove(c);
            }
        }
        return sfreq.isEmpty();
    }
}