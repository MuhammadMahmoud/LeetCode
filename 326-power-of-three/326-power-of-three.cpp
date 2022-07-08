class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 1){
            return true;
        }
        if(n==0){
            return false;
        }
        
        while(n%3 == 0){
            if(n==3){
                return true;
            }
            n/=3;
        }
        return false;
    }
};