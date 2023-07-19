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
    void right_view(TreeNode* root,vector<int>& vec1,int level,int& max_level){
        if(root==NULL){
            return;
        }
        
        if(max_level<level){
            vec1.push_back(root->val);
            max_level=level;
        }
        right_view(root->right,vec1,level+1,max_level);
        right_view(root->left,vec1,level+1,max_level);
        
        return;
    }
    void right_view_1(TreeNode* root,vector<int>& vec1){
        if(root==NULL){
            return;
        }
        
       queue<TreeNode*> q;
     
     q.push(root);
     
     while(!q.empty()){
         int n=q.size();
         for(int i=0;i<n;i++){
             TreeNode* f=q.front();
             q.pop();
             if(i==n-1){
                 vec1.push_back(f->val);
             }
             
             if(f->left){
                 q.push(f->left);
             }
             
             if(f->right){
                 q.push(f->right);
             }
         }
     }
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int>vec1;
        int level=0;
        int max_level=-1;
        
        right_view_1(root,vec1);
        
        return vec1;
        
        
    }
};

 
