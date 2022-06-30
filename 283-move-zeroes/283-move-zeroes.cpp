class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> n;
        for(int i=0;i<nums.size();i++){
               if(nums[i] != 0)
                   n.push_back(nums[i]);
        }
        
        for(int i=n.size();i<nums.size();i++){
            n.push_back(0);
        }
        
        nums=n;
    }
};