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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return head;
        }
       vector<ListNode*> v={head};
        while(v.back()->next != NULL){
            v.push_back(v.back()->next);
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
            v[i]->next=v[i+1];
        }
        v[v.size()-1]->next=0;    
        
        return v[0];
    }
};