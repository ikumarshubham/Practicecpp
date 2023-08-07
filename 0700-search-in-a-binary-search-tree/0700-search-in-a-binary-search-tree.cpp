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
    TreeNode* search(TreeNode* root,int val){
        if(root==NULL){
            return NULL;
        }
        if(root->val==val){
            return root;
        }
        
        if(val<root->val){
            return search(root->left,val);
        }
        else
        return search(root->right,val);
    }
    
    //search iteratively
    TreeNode* search1(TreeNode* root, int val) {
    while (root != nullptr && root->val != val) {
      root = (root->val > val) ? root->left : root->right;
    }
    return root;
}
    TreeNode* searchBST(TreeNode* root, int val) {
        
        return search(root,val);
    }
};