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
ListNode* Merge(ListNode* a,ListNode* b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    ListNode* c;
    if(a->val<b->val){
        c=a;
        c->next=Merge(a->next,b);
    }
    else{
        c=b;
        c->next=Merge(a,b->next);
    }
    return c;
}
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int size=lists.size();
        if(size==0){
            return NULL;
        }
        ListNode* head = lists[0];
        if(size==1){
            return head;
        }
        for(int i=1;i<size;i++){
            head=Merge(head,lists[i]);
        }
        return head;
    }
};