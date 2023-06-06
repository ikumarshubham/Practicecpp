/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* detect_cycle(ListNode* head){
    ListNode* fast=head;
    ListNode* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)return slow;
        
    }
    return NULL;
}

ListNode* cycle_start(ListNode* head){
    ListNode* fast=detect_cycle(head);
    if(fast==NULL)return NULL;
    ListNode* slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* ans=cycle_start(head);
        return ans;
    }
};