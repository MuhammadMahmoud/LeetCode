class Solution {
public:
    string interpret(string command) {
        string res="";
        for(int i=0;i<command.size();i++){
            if((i+1 < command.size()) && (command[i] =='(') && (command[i+1]==')') ){
                res+='o';
                i++;
            }
            else if( (i+3 < command.size()) && (command[i] =='(') &&
                    (command[i+1]=='a') && (command[i+3]==')') ){    
                res+="al";
                i+=3;
            }
            else{
                res+=command[i];
            }
        }
        return res;
    }
};