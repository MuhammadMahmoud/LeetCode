// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n == 1 && isBadVersion(n)){
            return n;
        }
        else if(n == 1 && !isBadVersion(n)){
            return -1;
        }
        unsigned int l=1,r=n,m;
        while(r>l){
            m=(l+r)/2;
            if(isBadVersion(m)){
               r=m; 
            }
            else
                l=m+1;
        }
        return r;
    }
};