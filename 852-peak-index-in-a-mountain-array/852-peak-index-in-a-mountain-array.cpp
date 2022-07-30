class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        if(arr.size()<3) return -1;
        int r=arr.size()-1,l=0;
        int m;
        // 1 8 5 4 3
        while(r>l){
            m=ceil((r+l)/2.0);
            if (arr[m] < arr[m-1]) r=m-1;
            else l=m;
            
        }
        return r;
    }
};