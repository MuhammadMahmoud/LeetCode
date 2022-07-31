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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        int count=0,t;
        while(temp) count++,temp=temp->next;
        temp=head;
        ListNode *temp1,*temp2;
        for(int i=1;i<=count;i++){
            if ( i == k ){
                temp1=temp;
            }
            if( i == (count-k+1) ){
                temp2=temp;
            }
            temp=temp->next;
        }
        // 1 2 3 4 5
        // k=2
        t=temp1->val;
        temp1->val=temp2->val;
        temp2->val=t;
        return head;
    }
};