class Solution {
public:
    static string swapChar(string s,int char1,int char2){
        char c;
        c=s[char1];
        s[char1]=s[char2];
        s[char2]=c;
        return s;
    }
    bool areAlmostEqual(string s1, string s2) {
        bool equal=true;
        if(s1.size() == s2.size()){
            if(s1 == s2){
                return true;
            }
            else{
                for(int i=0;i<s1.size();i++){
                    for(int j=0;j<s1.size();j++){
                        if(i == j){
                            continue;
                        }
                        else{
                            s1=swapChar(s1,i,j);
                            if(s1 == s2){
                                return true;
                            }
                            s1=swapChar(s1,i,j);
                        }
                    }
                }
            }
        }
        
        return false;
        
    }
};