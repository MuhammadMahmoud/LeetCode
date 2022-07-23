class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count=0;
        for(string s:operations){
            if(s == "++X" || s == "X++"){
                count++;
            }
            else if(s == "--X" || s== "X--"){
                count--;
            }
        }
        return count;
    }
};