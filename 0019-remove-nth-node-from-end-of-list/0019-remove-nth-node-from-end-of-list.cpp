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

void delete_all(ListNode*& head,int k){
    if(head==NULL)return;
    ListNode* temp1=head;
    
    int jump=1;
    
    while(jump<=k){
        temp1=temp1->next;
        jump++;
    }
    ListNode* temp2=head;
    ListNode* temp3=head;
    int flag=0;
    while(temp1!=NULL){
        temp1=temp1->next;
        if(flag==1){
            temp3=temp3->next;
        }
        temp2=temp2->next;
        flag=1;
    }
    
   if(head==temp2){
        ListNode*n=head->next;
        delete head;
        head=n;
        return;
    }
   temp3->next=temp2->next;
    delete temp2;
    return;
   
}
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        delete_all(head,n);
        return head;
    }
};