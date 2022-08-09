class Solution {
public:
    string freqAlphabets(string s) {
        string freq="";
        for(int i=0;i<s.size();i++){
            if(i + 2 < s.size() && ( s[i+2] != '#'))
                freq+=s[i]+48;
            else if(i + 2 < s.size() && ( s[i+2] == '#')){
                if(s[i] == '1')
                    freq+='i'+(s[i+1]-'0'+1);
                else if(s[i] == '2')
                    freq+='s'+(s[i+1]-'0'+1);
                i+=2;
            }
            else if(i < s.size())
                freq+=s[i]+48;
        }
        return freq;
    }
};