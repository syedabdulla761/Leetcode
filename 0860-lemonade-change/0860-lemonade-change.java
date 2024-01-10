class Solution {
    public boolean lemonadeChange(int[] bills) {
        int fives=0,tens=0,twenties=0;
        if(bills.length==1 && bills[0]!=5)return false;
        for(int i=0;i<bills.length;i++){
            if(bills[i]==5)fives+=5;
            if(bills[i]==10){
                tens+=10;
                if(fives<=0)return false;
                else fives-=5;
            }
            if(bills[i]==20){
                if(tens>0){
                    tens-=10;
                    if(fives<=0)return false;
                    else fives-=5;
                }
                else if(fives>=15){fives-=15;}
                else return false;
                twenties+=20;
            }
            }
        if( fives<0 || tens<0 || twenties<0)return false;
        return true;
    }
}