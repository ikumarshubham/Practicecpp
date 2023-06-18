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
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        ListNode* temp=head;
        int jump=1;
        while(jump<=k-1){
            temp=temp->next;
            jump++;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        for(int i=1;i<=k;i++){
            fast=fast->next;
        }
        while(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        swap(temp->val,slow->val);
        return head;
    }
};