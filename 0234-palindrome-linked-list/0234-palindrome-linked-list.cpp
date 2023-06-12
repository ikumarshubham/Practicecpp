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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)return true;
        vector<int>vec1;
        ListNode* temp=head;
        while(temp!=NULL){
            vec1.push_back(temp->val);
            temp=temp->next;
        }
        reverse(vec1.begin(),vec1.end());
        temp=head;
        int i=0;
        while(temp!=NULL){
            if(vec1[i]!=temp->val)return false;
            i++;
            temp=temp->next;
        }
        return true;
    }
};