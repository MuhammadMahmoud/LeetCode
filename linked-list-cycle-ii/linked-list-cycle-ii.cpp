/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head ==NULL || head->next == NULL)
            return NULL;
        ListNode *fast,*slow;
        slow=fast=head;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
             if(fast == slow){
                break;
            }
        }
        if(fast != slow)
        return NULL;
        slow=head;
        while(fast!=slow){
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
    }
    
};