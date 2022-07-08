class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        vector<int> arr;
        unsigned int temp=x>=0 ? x:x*-1 ;
        // cout<<temp<<endl;
        while(temp){
            arr.push_back(temp%10);
            temp/=10;
        }
        if(arr.size() == 1){
            return true;
        }
        for(int i=0;i<arr.size()/2;i++){
            if(arr[i] != arr[arr.size()-1-i]){
                return false;
            }
        }
        return true;
    }
};