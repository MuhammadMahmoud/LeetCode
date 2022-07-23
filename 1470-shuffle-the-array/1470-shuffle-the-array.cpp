class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res(nums.size());
        for(int i=0,j=0;j<nums.size()/2;i+=2,j++){
            res[i]=nums[j];
            res[i+1]=nums[n+j];
        }
        return res;
    }
};