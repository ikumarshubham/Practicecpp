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
ListNode* pos(ListNode* head,int p){
    int jump=1;
    ListNode* position=head;
    while(jump<=p-1){
        position=position->next;
        jump++;
    }
    return position;
}

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL)return head;
        if(left==right)return head;
        ListNode* l=pos(head,left);
        ListNode* r=pos(head,right);
        ListNode* temp1=head;
       // ListNode * temp1==head;
        if(l!=head){
            while(temp1->next!=l){
                temp1=temp1->next;
            }
        }
        ListNode* temp2=r->next;
        r->next=NULL;
        ListNode* temp3=reverseList(l);
        if(left==1)
        head=temp3;
        else temp1->next=temp3;
        while(temp3->next!=NULL){
            temp3=temp3->next;
        }
        temp3->next=temp2;
        return head;
        
        
     
    
    

      
    }
};