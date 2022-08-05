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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp=head ,*pre=temp;
        while(temp){
            if(temp == head && head->val == val) head=head->next;
            else if(temp->val == val && temp->next){
                pre->next=temp->next;
                temp=pre;
                
            }
            else if(temp->val == val && !temp->next){
                pre->next=NULL;
                temp=NULL;
                continue;
                
            }
            pre=temp;
            temp=temp->next;
        }
        return head;
    }
};