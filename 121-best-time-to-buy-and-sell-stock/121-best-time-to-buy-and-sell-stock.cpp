class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0,min=INT_MAX;
        for(int i=0;i<prices.size();i++){
           if(min>prices[i]) min=prices[i];
            if( (prices[i] - min) > max) max=prices[i] - min;
        }
        
        return max;
    }
};