class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> s;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            s[nums[i]]++;
            
        }
        for(pair<int,int> n:s){
            if(n.second == 1){
                sum+=n.first;
            }
        }
        
        return sum;
    }
};