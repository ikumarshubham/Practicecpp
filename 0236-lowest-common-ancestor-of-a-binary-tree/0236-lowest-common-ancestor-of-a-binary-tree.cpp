/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    TreeNode* LCA(TreeNode* root,TreeNode* a,TreeNode* b ){
        if(root==NULL){
            return NULL;
        }
        
        if(root==a || root==b){
            return root;
        }
        
        TreeNode* leftans=LCA(root->left,a,b);
        TreeNode* rightans=LCA(root->right,a,b);
        
        if(leftans!=NULL && rightans!=NULL){
          return root;
        }
        
        if(leftans!=NULL){
            return leftans;
        }
        
        return rightans;
    }
    
    bool  path(TreeNode* root,TreeNode* target,vector<TreeNode*>& vec1){
    if(root==NULL){
        return false;
    }
    
    if(root==target){
        vec1.push_back(root);
        return true;
    }

    vec1.push_back(root);
    bool ls =path(root->left,target,vec1);
    
    bool rs=path(root->right,target,vec1);
    if(!(ls|rs)){
        vec1.pop_back();
    }

    return ls|rs;

    
}
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return LCA(root,p,q);
    }
};