class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1,t1;
        for(char c:s){
            if(c == '#' && s1.size()){
                s1.pop_back();
            }
            else if(c == '#' && !s1.size()){
                // nothing
            }
            else s1.push_back(c);
        }
        for(char c:t){
            if(c == '#' && t1.size()){
                t1.pop_back();
            }
            else if(c == '#' && !t1.size()){
                // nothing
            }
            else t1.push_back(c);
        }
        return s1==t1;
    }
};