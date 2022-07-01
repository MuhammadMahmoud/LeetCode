class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int k=0,max=0,mark=0,push=0;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                k=j+1;
                max=nums2[j];
                mark=0;
                while(nums1[i] == nums2[j] && k<nums2.size()){
                    mark=1;
                    if(nums2[j]<nums2[k]){
                        arr.push_back(nums2[k]);
                        break;
                    }
                    k++;
                }
                if(nums2[j] == max && k == nums2.size() && mark==1){
                    arr.push_back(-1);
                    break;
                }
                
            }
            if(arr.size() != i+1){
                arr.push_back(-1);
            }
        }
        return arr;
    }
};