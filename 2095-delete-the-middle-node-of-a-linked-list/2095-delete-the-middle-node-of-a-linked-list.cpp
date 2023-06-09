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
ListNode* middle_element(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head;
    ListNode* temp=head;
    int flag=0;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(flag==1){
            temp=temp->next;
        }
        flag=1;
    }
    temp->next=slow->next;
    delete slow;
    return head;
    
}

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL)return NULL;
        if(head->next==NULL){
            delete head;
            head=NULL;
            return head;
        }
        head=middle_element(head);
        return head;
        
    }
};