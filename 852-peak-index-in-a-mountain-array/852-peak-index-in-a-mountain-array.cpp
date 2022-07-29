class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        if(arr.size()<3) return -1;
        int r=arr.size()-1,l=0;
        int m;
        while(r>=l){
            m=(r+l)/2;
            if(m>0 && m< arr.size()-1){
                if(arr[m]> arr[m-1] && arr[m] > arr[m+1]) return m;
                else if (arr[m] > arr[m-1] && arr[m] < arr[m+1]) l=m+1;
                else if (arr[m] < arr[m-1] && arr[m] > arr[m+1]) r=m-1;
            }
            else if( m == 0 && arr[m+1]>arr[m] && arr[m+2]<arr[m+1]){
                return m+1;
            }
            else if((m == 0 && arr[m+1]>arr[m] && arr[m+2]>arr[m+1]) ||
                   (m == 0 && arr[m+1]<arr[m] && arr[m+2]<arr[m+1]) ){
                return -1;
            }
            else if(m == arr.size()-1 && arr[m-1]>arr[m] && arr[m-2]<arr[m-1]){
                return m-1;
            }
            else if((m == arr.size()-1 && arr[m-1]>arr[m] && arr[m-2]>arr[m-1]) ||
                   (m == arr.size()-1 && arr[m-1]<arr[m] && arr[m-2]<arr[m-1])){
                return -1;
            }
        }
        return -1;
    }
};