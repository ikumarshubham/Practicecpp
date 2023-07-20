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
bool issem(TreeNode* root1,TreeNode* root2){
    if(root1==NULL || root2==NULL){
        return root1==root2;
    }
    
    if(root1->val!=root2->val){
        return false;
    }
    
    bool ls=issem(root1->left,root2->right);
    bool rs=issem(root1->right,root2->left);
    
    return ls&rs;
}
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        
        return issem(root->left,root->right);
    }
};