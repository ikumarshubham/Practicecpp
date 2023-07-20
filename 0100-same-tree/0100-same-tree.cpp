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
    
    bool same_tree2(TreeNode* root1,TreeNode* root2){
        if(root1==NULL || root2==NULL){
            return root1==root2;
        }
        
        queue<TreeNode*> q;
        q.push(root1);q.push(root2);
        while(!q.empty()){
            TreeNode* r1=q.front();q.pop();
            TreeNode* r2=q.front();q.pop();
            if(r1==NULL && r2==NULL){
                continue;
            }
            if(r1==NULL || r2==NULL){
                return false;
            }
            if(r1->val!=r2->val){
                return false;
            }
            
                q.push(r1->left);
        
           
                q.push(r2->left);
            
            
                q.push(r1->right);
            
           
                q.push(r2->right);
          
            
        }
        return true;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        return same_tree2(p,q);
    }
};