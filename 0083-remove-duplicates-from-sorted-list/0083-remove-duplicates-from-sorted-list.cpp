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
void remove_duplicates(ListNode* head){
    if(head==nullptr || head->next==nullptr){
        return ;
    }
    
    ListNode* temp=head->next;
    ListNode* previous=head;
    while(temp!=nullptr){
        if(temp->val==previous->val){
            previous->next=temp->next;
            delete temp;
            temp=previous->next;
        }
        else{
            previous=previous->next;
            temp=temp->next;
        }
    }
    return;
}
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        remove_duplicates(head);
        return head;
    }
};