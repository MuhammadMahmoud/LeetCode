class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> m;
        for(int num:nums) m[num]++;
        nums.clear();
        for(auto it=m.begin();it!=m.end();it++){
            while(it->second--) nums.push_back(it->first);
        }
    }
};