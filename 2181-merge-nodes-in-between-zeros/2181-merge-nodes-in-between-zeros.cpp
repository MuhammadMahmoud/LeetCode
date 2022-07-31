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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *res=NULL,*temp;
        temp=res;
        int sum=0,zeros=0;
        while(head){
            if(head->val ==0 && zeros>0){
                if(!res)res=temp= new ListNode(sum);
                else temp->next=new ListNode(sum),temp=temp->next;
                sum=0;
            }
            else if(head->val ==0 && !(zeros>0)){
                zeros++;
            }
            else if(head->val !=0 && zeros>0){
                sum+=head->val;
            }
            
            head=head->next;
        }
        return res;
    }
};