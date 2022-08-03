class Solution {
public:
    int minimumSum(int num) {
        vector<int> arr;
        while(num){
            arr.push_back(num%10);
            num/=10;
        }
        sort(arr.begin(),arr.end());
        return ((arr[0]*10)+arr[3])+((arr[1]*10)+arr[2]);
    }
};