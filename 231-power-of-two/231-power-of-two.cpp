class Solution {
public:
    bool isPowerOfTwo(int n) {
        unsigned int sum=1;
        if(n>0){
            for(int i=0;i<sizeof(int)*8;i++){
                if(sum == n){
                    return true;
                }
                sum<<=1;
            }
        }
        return false;
    }
};