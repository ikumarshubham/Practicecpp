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
ListNode* midpoint(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;  
}
ListNode* reverselist(ListNode*head){
    ListNode*current =head;
    ListNode* previous =NULL;
    while(current !=NULL ){
        ListNode* n=current->next;
        current->next=previous;
        previous= current;
        current=n;
    }
    return previous;
    
}
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)return true;
        ListNode* temp=head;
        ListNode* mid=midpoint(head);
        ListNode* temp1=reverselist(mid->next);
        while(temp1!=NULL){
            if(temp->val != temp1->val)return false;
            temp=temp->next;
            temp1=temp1->next;
        }
        return true;
    }
};