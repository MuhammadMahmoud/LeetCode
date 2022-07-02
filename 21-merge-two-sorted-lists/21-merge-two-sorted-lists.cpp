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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* merged=new ListNode(0);
        ListNode* temp=merged;
        while(list1 || list2){
            if( list1 && list2 && (list1->val < list2->val)){
                ListNode* node=new ListNode(list1->val);
                temp->next=node;
                temp=temp->next;
                list1=list1->next;
            }
            else if( list1 && list2 && (list1->val >= list2->val)) 
            {
                ListNode* node=new ListNode(list2->val);
                temp->next=node;
                temp=temp->next;
                list2=list2->next;
            }
            else if(list1 && !list2){
                ListNode* node=new ListNode(list1->val);
                temp->next=node;
                temp=temp->next;
                list1=list1->next;
            }
            else if(!list1 && list2){
                ListNode* node=new ListNode(list2->val);
                temp->next=node;
                temp=temp->next;
                list2=list2->next;
            }
        }
        return merged->next;
    }
};