class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0,presum=0;
        for(int num:nums) sum+=num;
        for(int i=0;i<nums.size();i++){
            if(presum == (sum-nums[i]-presum)) return i;
            presum+=nums[i];
        }
        return -1;
    }
};