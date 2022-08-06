class Solution {
public:
    string sortSentence(string s) {
        map<int,string> m;
        string w="";
        for(int i=0;i<s.size();i++){
           if(s[i] >= '0' && s[i] <= '9') m[s[i]-48]=w,w="";
            else if(s[i] == ' ') continue;
            else w+=s[i];
        }
        w="";
        auto end=(m.end())--;
        for(auto it=m.begin();it!=m.end();it++){
            cout<<"order "<<it->first<<" "<<it->second<<endl;
            if(it->first == end->first) w+=it->second;
            else w+=it->second+" ";
            
        }
        return w;
    }
};