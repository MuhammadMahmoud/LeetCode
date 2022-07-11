class Solution {
public:
    int addDigits(int num) {
        
        if(num == 0){
            return 0;
        }
        else if(num/10 ==0){
            return num;
        }
        int sum=0;
        int temp;
        while(num/10 != 0){
            temp=num;
            sum=0;
            while(temp){
                sum+=(temp%10);
                temp/=10;
            }
            num=sum;
        }

        return sum;
    }
};