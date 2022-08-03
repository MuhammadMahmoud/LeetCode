class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int n:nums)m[n]++;
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second % 2 != 0) return false;
        }
        return true;
    }
};