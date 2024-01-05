class Solution {
    public int maximumWealth(int[][] accounts) {
        int ans=0;
        int sum=0;
        for(int i=0;i<accounts.length;i++){
            sum=Arrays.stream(accounts[i]).sum();
            if(ans<sum)ans=sum;
        }
        return ans;
    }
}