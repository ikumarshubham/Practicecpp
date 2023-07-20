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
    
    bool same_tree(TreeNode* root1,TreeNode* root2){
        if(root1==NULL && root2==NULL){
            return true;
        }
        if(root1==NULL && root2!=NULL){
            return false;
        }
        if(root2==NULL && root1!=NULL){
            return false;
        }
        
        if(root1->val!=root2->val){
            return false;
        }
        
        bool ls=same_tree(root1->left,root2->left);
        bool rs=same_tree(root1->right,root2->right);
        
        return ls&rs;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        return same_tree(p,q);
    }
};