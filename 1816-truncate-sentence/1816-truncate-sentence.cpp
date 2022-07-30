class Solution {
public:
    string truncateSentence(string s, int k) {
        int c=0;
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i] == ' '){
                c++;
            }
            if(c==k){
                break;
            }
            res+=s[i];
        }
        return res;
    }
};