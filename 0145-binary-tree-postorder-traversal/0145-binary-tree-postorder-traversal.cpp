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
    void postorder(TreeNode* root,vector<int>& vec1){
        
        if(root==NULL){
            return;
        }
        
        postorder(root->left,vec1);
        postorder(root->right,vec1);
        vec1.push_back(root->val);
             
    }
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int>vec1;
        
        postorder(root,vec1);
        
        return vec1;
        
    }
};