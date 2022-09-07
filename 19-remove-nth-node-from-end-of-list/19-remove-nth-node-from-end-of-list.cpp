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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp1=head,*temp2=head;
        int size=0;
        while(temp2){
            temp2=temp2->next;
            size++;
            if(size-n-1 > 0)
                temp1=temp1->next;
        }
        if(size == n){
            head=head->next;
        }
        else{
            temp1->next=temp1->next->next;
        }
        return head;
    }
};