class Solution {
public:
    string reverseWords(string s) {
        auto f=s.begin(),l=s.begin();
        for(auto i=s.begin();i!=s.end();i++,l++){
            if( *i == ' '){
                reverse(f,l);
                f=i+1;
            }
        }
        reverse(f,l);
        return s;
    }
};