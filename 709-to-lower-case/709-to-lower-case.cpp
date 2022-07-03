class Solution {
public:
    string toLowerCase(string s) {
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                res+=(s[i]+32);
            }
            else{
                res+=s[i];
            }
        }
        return res;
    }
};