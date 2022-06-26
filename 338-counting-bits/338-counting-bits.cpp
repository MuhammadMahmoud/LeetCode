class Solution {
public:
    unsigned int bitCounter(unsigned int num){
        unsigned int count=0;
        for(int i=0;i<sizeof(int)*8;i++){
            if(num&1 == 1){
                count++;
            }
            num>>=1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> vec;
        for(int i=0;i<=n;i++){
            vec.push_back(bitCounter(i));
        }
        return vec;
    }
};