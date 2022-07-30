class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxsum=-10000,count;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            count=nums[i];
            if(count>sum) sum=count;
            if(sum>maxsum) maxsum=sum;
                
        }
        return maxsum;
    }
};