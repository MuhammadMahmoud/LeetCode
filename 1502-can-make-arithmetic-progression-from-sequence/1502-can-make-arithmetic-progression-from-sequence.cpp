class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int diff;
        sort(arr.begin(),arr.end());
        diff=arr[1]-arr[0];
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i+1]-arr[i] != diff){
                return false;
            }
        }
        return true;
    }
};