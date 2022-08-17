class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> m;
        for(char c:s){
            if(m.count(c)) return c;
            else m.insert(c);
        }
        return -1;
    }
};