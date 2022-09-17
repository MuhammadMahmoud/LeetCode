class Solution {
public:
    string getHint(string secret, string guess) {
        int b=0,c=0;
        string res;
        unordered_map<char,int> m;
        for(char c:secret) m[c]++;
        for(int i=0;i<guess.size();i++){
            if(guess[i] == secret[i]){
                b++;
                m[guess[i]]--;
            }
        }
        for(int i=0;i<guess.size();i++){
            if(guess[i] != secret[i] && m[guess[i]]){
                c++;
                m[guess[i]]--;
            }
        }
        res+=to_string(b) + "A" + to_string(c) + "B"; 
        return res;
    }
};