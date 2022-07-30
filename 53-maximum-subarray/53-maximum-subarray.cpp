class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxsum=-10000,reset;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            reset=nums[i];
            if(reset>sum) sum=reset;
            if(sum>maxsum) maxsum=sum;
                
        }
        return maxsum;
    }
};