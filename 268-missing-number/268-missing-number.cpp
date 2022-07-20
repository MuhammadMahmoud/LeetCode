class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> us;
        for(int i=0;i<nums.size();i++){
            us.insert(nums[i]);
        }
        for(int i=0;i<=nums.size();i++){
            if(!us.count(i)){
                return i;
            }
        }
        return -1;
    }
};