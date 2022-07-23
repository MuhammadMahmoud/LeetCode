class KthLargest {
public:
    // O(NLOGN) time, O(N) space
    multiset<int> s1, s2; // O(N) space
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(int num: nums) s1.insert(num);  // O(NLOGN) time
        while(s2.size() < k && s1.size()) s2.insert(*(s1.rbegin())), s1.erase(--s1.end());  // O(KLOGN)
    }
    
    void balance() {  // O(LOGN)
        if(s2.size() > k) s1.insert(*(s2.begin())), s2.erase(s2.begin());
    }
    
    int add(int val) {  // O(LOGN)
        if(s2.size() < k || val > *(s2.begin())) {
            s2.insert(val), balance();
        } else {
            s1.insert(val);
        }
        // (val > *(s2.begin())) ? s2.insert(val), balance() : s1.insert(val);
        return *(s2.begin());
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */