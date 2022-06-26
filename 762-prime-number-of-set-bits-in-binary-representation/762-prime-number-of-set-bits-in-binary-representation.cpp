class Solution {
public:
    static bool Isprime(int num){
        int count=0;
        for(int i=1;i<=num;i++){
            if(num%i == 0){
                count++;
            }
            if(count > 2 || num == 1){
                return false;
            }
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int OnesCount=0,PrimeCount=0;
        int temp;
        for(int i=left;i<=right;i++){
            temp=i;
            for(int j=0;j<sizeof(int)*8;j++){
                if(temp & 1){
                    OnesCount++;
                }
                temp>>=1;
            }
            if(Isprime(OnesCount)){
                PrimeCount++;
            }
            OnesCount=0;
        }
        return PrimeCount;
    }
};