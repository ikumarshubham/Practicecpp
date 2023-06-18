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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        vector<int>vec1;
        ListNode* temp=head;
        while(temp!=NULL){
            vec1.push_back(temp->val);
                temp=temp->next;
        }
        int size=vec1.size();
        auto it=vec1.begin();
        for(int i=0;;i+=k){
            if(i+k>size)break;
            reverse(it,it+k);
            it+=k;
        }
        temp=head;
        for(int i=0;i<size;i++){
            temp->val=vec1[i];
            temp=temp->next;
        }
        return head;
    }
};