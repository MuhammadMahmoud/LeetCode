class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> rs;
        rs=nums;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                rs[i]+=nums[j];
            }
        }
        return rs;
    }
};