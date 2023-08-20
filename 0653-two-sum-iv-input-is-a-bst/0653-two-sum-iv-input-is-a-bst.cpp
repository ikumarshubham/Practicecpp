/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root,vector<int>& vec1){
        if(root==NULL){
            return;
        }
        inorder(root->left,vec1);
        vec1.push_back(root->val);
        inorder(root->right,vec1);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>vec1;
        inorder(root,vec1);
        
        int i=0,j=vec1.size()-1;
        
        while(i<j){
            if(vec1[i]+vec1[j]==k){
                return true;
            }
            
            else if(vec1[i]+vec1[j]<k){
                i++;
            }
            else{
                j--;
            }
        }
        
        return false;
        
        
    }
};