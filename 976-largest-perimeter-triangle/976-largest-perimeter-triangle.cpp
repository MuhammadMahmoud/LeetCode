class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int max=0;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-3;i>=0;i--){
            if(nums[i] + nums[i+1] > nums[i+2]){
                if(max < nums[i] + nums[i+1] + nums[i+2])
                    max=nums[i] + nums[i+1] + nums[i+2];
            }
        }
        return max;             
    }
};