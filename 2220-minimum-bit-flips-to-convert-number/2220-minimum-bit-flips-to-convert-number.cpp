class Solution {
public:
    #define toggle_bit(num,bit_num) num^=(1<<bit_num)
    int minBitFlips(int start, int goal) {
        int count=0;
        int temp=start;
        for(int i=0;i<sizeof(int)*8;i++){
            if( (temp & 1) != (goal & 1) ){
                count++;
            }
            temp>>=1;
            goal>>=1;
        }
        return count;
    }
};