class Solution {
public:
    string decodeMessage(string key, string message) {
        string res="";
        int count=0;
        unordered_map<char,char> m;
        for(int i=0;i<key.size();i++){
            if(key[i] != ' ' && !m.count(key[i]))
                m[key[i]]='a'+ count++;
        }
        for(char c:message){
            if(c != ' ') 
            res+=m[c];
            else
            res+=' ';
        }
            
        return res;
    }
};