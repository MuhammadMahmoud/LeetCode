class Solution {
public:
    int hammingWeight(uint32_t n) {
        if(n==0) return 0;
        else
            return (n%2) + hammingWeight(n/2);
    }
};