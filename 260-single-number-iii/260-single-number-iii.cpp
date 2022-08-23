class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        vector<int>res;
        // 1 1 2 3 3 5
        for(int i=0;i<nums.size();i++){
            if(i+1 == nums.size()){
                if(nums[i]!=nums[i-1]){
                    res.push_back(nums[i]);
                }
            }
            else if(nums[i] == nums[i+1]){
                count++;
            }
            else{
                if(count%2 ==1){
                    count=0;
                }
                else{
                    res.push_back(nums[i]);
                }
            }
        }
        return res;
    }
};