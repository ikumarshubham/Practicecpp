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
int height(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    
    int ls=height(root->left);
    int rs=height(root->right);
    
    return max(ls,rs)+1;
}

int diameter(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    
    int ls=height(root->left);
    int rs=height(root->right);
    
    int op1=ls+rs;
    int op2=diameter(root->left);
    int op3=diameter(root->right);
    
    return max(op1,max(op2,op3));
}
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        int ans=diameter(root);
        
        return ans;
        
    }
};