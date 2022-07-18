class Solution {
public:
    string addBinary(string a, string b) {
        int size= (a.size()>b.size())? a.size():b.size();
        string res;
        char carry='0';
        for(int i=a.size()-1,j=b.size()-1;(i>=0 || j>=0);i--,j--){
            if(i>=0 && j>=0){
                if((a[i] == '0' && b[j] == '1' && carry=='0') ||
                  (a[i] == '1' && b[j] == '0' && carry=='0') ||
                   (a[i] == '0' && b[j] == '0' && carry=='1')
                  ){
                    res.push_back('1');
                    carry='0';
                }
                else if((a[i] == '1' && b[j] == '1' && carry=='0') ||
                        (a[i] == '0' && b[j] == '1' && carry=='1') ||
                        (a[i] == '1' && b[j] == '0' && carry=='1')
                       ){
                    res.push_back('0');
                    carry='1';
                }
                else if((a[i] == '1' && b[j] == '1' && carry=='1')){
                    res.push_back('1');
                    carry='1';
                }
                else if( (a[i] == '0' && b[j] == '0' && carry=='0')){
                    carry='0';
                    res.push_back('0');
                }
            }
            else if(i>=0){
                if(a[i] == '1' && carry=='1'){
                    res.push_back('0');
                    carry='1';
                }
                else if(a[i]=='0' && carry=='1' || a[i]=='1' && carry=='0'){
                    res.push_back('1');
                    carry='0';
                }
                else{
                    res.push_back('0');
                    carry='0';
                }
                
            }
            else if(j>=0){
                if(b[j] == '1' && carry=='1'){
                    res.push_back('0');
                    carry='1';
                }
                else if(b[j]=='0' && carry=='1' || b[j]=='1' && carry=='0'){
                    res.push_back('1');
                    carry='0';
                }
                else{
                    res.push_back('0');
                    carry='0';
                }
            }
        }
        if(carry == '1')
            res.push_back('1');
        reverse(res.begin(),res.end());
        return res;
    }
};