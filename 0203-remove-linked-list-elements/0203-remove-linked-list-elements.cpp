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

void delete_all(ListNode*& head,int key){
    if(head==NULL)return;
    ListNode* temp=head;
    while(temp->val==key){
       ListNode*n=temp->next;
       delete temp;
       temp=n;
       if(temp==nullptr){
        break;
       }
    }
    head= temp;
    if(head==nullptr)return;
    temp=head->next;
    ListNode* previous =head;
    while(temp!=nullptr){
        if(temp->val==key){
            previous->next=temp->next;
            delete temp;
            temp=previous->next;
            continue;
        }
        temp=temp->next;
        previous=previous->next;
    }
    return ;
}
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        delete_all(head,val);
        return head;
    }
};