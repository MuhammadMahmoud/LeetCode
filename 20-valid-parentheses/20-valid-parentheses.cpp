class Solution {
public:
    bool isValid(string braces) {
        stack<char> s;
        bool v=false;
        int size=braces.size();
          for(int i=0;i<size;i++){
            v=true;
            if(braces[i] == '(' || braces[i] == '[' || braces[i] == '{'){
              s.push(braces[i]);
            }

            else if(braces[i] == ')' && s.size() > 0 && s.top() == '('){
                s.pop();
              }
            else if(braces[i] == ']' && s.size() > 0 &&  s.top() == '['){
                s.pop();
              }
            else if(braces[i] == '}' && s.size() > 0 && s.top() == '{'){
                s.pop();
              }
              else{
                return false;
              }

          }
          if(s.size() == 0 && v==true)
            return true;
          else
            return false;
    }
};