class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int num:nums) m[num]++;
        for(auto it=m.begin();it!=m.end();it++) 
            if(it->second > nums.size()/2) 
                return it->first;
        return -1;
    }
};