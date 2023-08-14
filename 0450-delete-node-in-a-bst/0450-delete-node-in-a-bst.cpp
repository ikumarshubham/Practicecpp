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

TreeNode* deleteINBST(TreeNode* root,int key){
    if(root==NULL){
        return NULL;
    }
    
    else if(key < root->val){
        root->left=deleteINBST(root->left,key);
    }
    
    else if(key == root->val){
        //1 . node is leaf node 
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        
        //2 . node with only one children
        if(root->left!=NULL && root->right==NULL){
            TreeNode* temp=root->left;
            delete root;
            return temp;
        }
        
        if(root->right!=NULL && root->left==NULL){
            TreeNode* temp=root->right;
            delete root;
            return temp;
        }
        
        //3. node with two clidren
        if(root->left!=NULL && root->right!=NULL){
        TreeNode* replace=root->right;
        while(replace->left!=NULL){
            replace=replace->left;
        }
        
        root->val=replace->val;
            
        root->right=deleteINBST(root->right,replace->val);
            return root;
        }
    }
    
    root->right=deleteINBST(root->right,key);
    return root;
}

class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        return deleteINBST(root,key);
    }
};