class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() > 1)
            sort(nums.begin(),nums.end());
        else if(nums.size() == 1)
            return 1;
        else
            return 0;
        
        int count=1,max=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1] - nums[i] == 1){
                count++;
            }
            else if(nums[i+1] - nums[i] == 0){
                //nothing
            }
            else{
                count=1;
            }
            if(count>max){
                max=count;
            }
        }
        return max;
    }
};