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
void insert_at_tail(ListNode*& head,int d){
    if(head==NULL){
        head=new ListNode(d);
        return ;
    }
    ListNode* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new ListNode(d);
    
    return;
}
ListNode* reverseList(ListNode* head) {
        ListNode* current=head;
        ListNode* previous=nullptr;
         ListNode* newnode;
        while(current!=nullptr){
            newnode=current->next;
            current->next=previous;
            previous=current;
            current=newnode;
            
        }
        return previous;
    }
int length(ListNode* head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int len1=length(l1);
        int len2=length(l2);
        // l1=reverseList(l1);
        // l2=reverseList(l2);
        ListNode* temp1;
        ListNode* temp2;
        ListNode* newnode=NULL;
        if(len1>len2){
            temp2=l2;
            temp1=l1;
        }
        else {
            temp2=l1;
            temp1=l2;
        }
        int carry=0;
        ListNode* ans=temp1;
        while(temp2!=NULL){
            
            int no=temp1->val+temp2->val+carry;
            carry=no/10;
            no=no%10;
            insert_at_tail(newnode,no);
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1!=NULL){
            int no=temp1->val+carry;
            carry=no/10;
            no=no%10;
            insert_at_tail(newnode,no);
            temp1=temp1->next;
        }
        if(carry>0){
            insert_at_tail(newnode,carry);
        }
        return newnode;
    }
};