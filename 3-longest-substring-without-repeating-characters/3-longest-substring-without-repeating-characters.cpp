class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max=0;
        int flag=0;
        unordered_map<char,int> m;
        for(int i=0,j=0;j<s.size();j++){
            m[s[j]]++;
            if(m[s[j]] >= 2)
                while(m[s[j]] >= 2) m[s[i]]--,i++;
            if(j-i+1 > max) max=j-i+1;
        }
        return max;
    }
};