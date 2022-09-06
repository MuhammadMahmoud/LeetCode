/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<ListNode*> v={head};
        int max=0;
        while(v.back()->next != NULL) v.push_back(v.back()->next);
        for(int i=0;i<v.size()/2;i++)
            if((v[i]->val+v[v.size()-1-i]->val) > max) max=v[i]->val+v[v.size()-1-i]->val;
        return max;
    }
};