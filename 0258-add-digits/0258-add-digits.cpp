class Solution {
public:
    int addDigits(int num) {
        int c=0,sum=10;
        while(sum>9){
            sum=0;
            while(num){
                sum+=num%10;
                num/=10;
            }
            num=sum;
        }  
    if(num<=9)return num;
        return 0;
    }
};