class Solution {
    public boolean canMakeArithmeticProgression(int[] arr) {
        Arrays.sort(arr);
        if(arr.length==1 || arr.length==2) return true;
        int r = arr[arr.length-1]-arr[arr.length-2];
        for ( int i=arr.length-2 ; i>0;i--){
            if((arr[i]-arr[i-1])!=r)return false;
        }
        return true;
    }
}