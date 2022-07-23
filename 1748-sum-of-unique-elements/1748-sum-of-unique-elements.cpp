class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> s;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            s[nums[i]]++;
            
        }
        for(int i=0;i<s.size();i++){
            if(s[i] == 1){
                sum+=i;
            }
        }
        return sum;
    }
};