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
        int size=0,diff;
        ListNode *temp = head ;
        while(temp){
            size++;
            temp=temp->next;
        }
        temp=head;
        diff=size-n;
        if(size == n){
            head=head->next;
        }
        else if(n==1){
            while(--diff) temp=temp->next;
            temp->next=NULL;
        }
        else{
            while(--diff) temp=temp->next;
            
            temp->next=temp->next->next;
        }
        return head;
    }
};