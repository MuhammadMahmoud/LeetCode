class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
        for(char c:s) m[c]++;
        for(int i=0;i<t.size();i++){
            if(m[t[i]]){
                m[t[i]]--;
            }
            else return false;
        }
        for(auto it=m.begin();it!=m.end();it++) if(it->second) return false;
            
        return true;
    }
};