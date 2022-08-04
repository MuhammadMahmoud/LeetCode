class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        int min=INT_MAX;
        for(char c:s) m[c]++;
        for(auto it=m.begin();it!=m.end();it++ ){
            if(it->second == 1){
                for(int i=0;i<s.size();i++){
                    if(it->first == s[i] && i<min) min=i;
                }
            }
        }
        if(min != INT_MAX) return min;
        else return -1;
    }
};