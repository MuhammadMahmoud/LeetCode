class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target(nums.size(),-1);
        for(int i=0;i<nums.size();i++){
            if(target[index[i]] == -1){
                target[index[i]]=nums[i];
            }
            else{
                for(int j=target.size()-1;j>index[i];j--){
                    target[j]=target[j-1];
                }
                target[index[i]]=nums[i];
            }
        }
        return target;
    }
};