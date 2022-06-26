class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        for(int i=0;i<(sizeof(uint32_t)*8);i++){
            if(n & 1 == 1){
                count++;
            }
            n>>=1;
        }
        return count;
    }
};