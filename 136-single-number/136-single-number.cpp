class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count=1;
        if(nums.size() == 1){
            return nums[0];
        }
        else if(nums.size() == 2){
            return -1;
        }
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i+=2){
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
            
        return -1;
    }
};