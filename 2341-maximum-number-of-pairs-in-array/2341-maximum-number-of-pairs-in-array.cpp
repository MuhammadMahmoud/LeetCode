class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> res(2,0);
        unordered_map<int,int> m;
        for(int n:nums) m[n]++;
        for (auto i = m.begin(); i != m.end(); i++){
                res[0]+=(i->second)/2;
                res[1]+=(i->second)%2;
        }
        return res;
    }
};