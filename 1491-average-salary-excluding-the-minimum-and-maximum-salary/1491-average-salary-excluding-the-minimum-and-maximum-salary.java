class Solution {
    public double average(int[] salary) {
        if(salary.length<=2)return 0;
        Arrays.sort(salary);
        double avg=0;
        for ( int i=1;i<salary.length-1;i++){
            avg+=salary[i];
        }
        return avg/(salary.length-2);
    }
}