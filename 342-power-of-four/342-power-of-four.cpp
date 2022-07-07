class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 1){
            return true;
        }
        else if(n<=0){
            return false;
        }
        int unsigned num=4;
        for(int i=0;i<sizeof(int)*8;i+=2){
            if(n == num){
                return true;
            }
            num<<=2;
        }
        
        return false;
    }
};