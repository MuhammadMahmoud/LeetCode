class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res(nums1.size(),0);
        int c1=0,c2=0;
        for(int i=0;i<res.size();i++){
            if(c1 <m && c2<n && 
               nums1[c1] < nums2[c2]){
                res[i]=nums1[c1];
                c1++;
            }
            else if( c1 <m && c2<n &&
               !(nums1[c1] < nums2[c2]) ){
                res[i]=nums2[c2];
                c2++;
            }
            else if(c1 <m && !(c2<n)){
                res[i]=nums1[c1];
                c1++;
            }
            else if( !(c1 <m) && (c2<n) ){
                res[i]=nums2[c2];
                c2++;
            }
        }
        nums1=res;
    }
};