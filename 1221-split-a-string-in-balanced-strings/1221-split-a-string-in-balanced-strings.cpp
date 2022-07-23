class Solution {
public:
    int balancedStringSplit(string s) {
        int l=0,r=0;
        int count=0;
        for(char c:s){
            if(c=='L'){
                l++;
            }
            else if(c=='R'){
                r++;
            }
            if(l>0 && r>0 && l==r){
                count++;
            }
        }
        return count;
    }
};