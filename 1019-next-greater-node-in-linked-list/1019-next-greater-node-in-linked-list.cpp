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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> res;
        ListNode* temp;
        // 2 7 4 3 5
        // 7 0 5 5 
        while(head){
            temp=head->next;
            while(temp){
                if(temp->val > head->val){
                    res.push_back(temp->val);
                    break;
                }
                temp=temp->next;
            }
            if(!temp) res.push_back(0);
            head=head->next;
        }
        return res;
    }
};