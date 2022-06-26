class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,mal=1;
        while(n){
            sum+=(n%10);
            mal*=(n%10);
            n/=10;
        }
        return mal-sum;
    }
};