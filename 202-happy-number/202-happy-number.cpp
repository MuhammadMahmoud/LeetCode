class Solution {
public:
    bool isHappy(int n) {
        int temp;
        double squareSum=0;
        int count=100;
        while(n>1 && count>0){
            temp=n;
            while(temp>0){
                squareSum+=pow(temp%10,2);
                temp/=10;
            }
            n=(int)squareSum;
            squareSum=0;
            count--;
        }
        if(n==1){
            return true;
        }
        else{
            return false;
        }
    }
};