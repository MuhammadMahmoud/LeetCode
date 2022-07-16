class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // remove any additional rotation cycles
        if(k>nums.size()){
            k=k-(nums.size()*(k/nums.size()));
        }
        vector<int> temp(k);
        // add the rotated elements in temp
        for(int i=0;i<k;i++){
            temp[i]=nums[nums.size()-k+i];
        }
        //shift right the supposed values
        for(int j=0,i=nums.size()-1-k;i>=0;i--,j++){
            nums[nums.size()-1-j]=nums[i];
        }
        // add the rotated elements
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
        }
    }
};