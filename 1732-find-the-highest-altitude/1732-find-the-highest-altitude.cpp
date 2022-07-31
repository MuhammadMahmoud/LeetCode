class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0,maxsum=0;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            if(maxsum<sum) maxsum=sum;
        }
        return maxsum;
    }
};