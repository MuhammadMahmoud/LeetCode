class Solution {
public:
    int arraySign(vector<int>& nums) {
        int product;
        if(nums[0] > 0){
            product=1;
        }
        else if(nums[0] == 0){
            product=0;
        }
        else{
            product=-1;
        }
        for(int i=1;i<nums.size();i++){
            if(product*nums[i] > 0){
                product=1;
            }
            else if(product*nums[i] == 0){
                product=0;
            }
            else{
                product=-1;
            }
        }
        return product;
    }
};