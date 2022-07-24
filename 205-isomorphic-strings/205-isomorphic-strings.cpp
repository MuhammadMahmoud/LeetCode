class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> m1;
        for(int i=0;i<s.size();i++){ 
            m1[s[i]]=t[i];
        }
        for(auto it=m1.begin();it!=m1.end();it++){
            for(auto itt=m1.begin();itt!=m1.end();itt++){
                if(it->first != itt->first && it->second == itt->second){
                    return false;
                }
            }
        }
        for(int i=0;i<s.size();i++){ 
            if(m1[s[i]]!=t[i]){
                return false;
            }
        }
        return true;
    }
};