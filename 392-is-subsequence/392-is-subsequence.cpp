class Solution {
public:
    bool isSubsequence(string s, string t) {
    bool found;
    int seq=0;
    for(int i=0;i<s.size();i++){
        found=0;
        for(int j=seq;j<t.size();j++){
            if(s[i]==t[j]){
                found=1;
                seq=j+1;
                j=t.size();
            }
        }
        if(found){
            found=0;
        }
        else{
            return false;
        }
    }
    return true;
    }
};