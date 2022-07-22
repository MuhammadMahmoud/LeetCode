class KthLargest {
private:
    multiset<int> items;
    int kth;
public:
    KthLargest(int k, vector<int>& nums) {
        for(int num:nums) items.insert(num);
        this->kth=k;
    }
    
    int add(int val) {
        items.insert(val);
        int count=0;
        for(int num:items) if(count++ == items.size()-kth) return num;
        return 0;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */