class Solution {
public:
    string reverseWords(string s) {
        auto f=s.begin(),i=s.begin();
        for(;i!=s.end();i++){
            if( *i == ' '){
                reverse(f,i);
                f=i+1;
            }
            else if(i+1 == s.end()){
                reverse(f,s.end());
            }
        }
        return s;
    }
};