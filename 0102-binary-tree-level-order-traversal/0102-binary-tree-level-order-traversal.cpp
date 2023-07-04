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
void levelorder(TreeNode* root,vector<vector<int>>&vec1){
    vector<int>vec2;
    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);
    
    
    while(!q.empty()){
        TreeNode* f=q.front();
        
        if(f==NULL){
            vec1.push_back(vec2);
            q.pop();
            vec2.clear();
            
            if(!q.empty()){
                q.push(NULL);
            }  
        }
        
        else{
            vec2.push_back(f->val);
            q.pop();
            
            
            if(f->left){
                q.push(f->left);
            }
            
            if(f->right){
                q.push(f->right);
            }
        }
    }
}
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> vec1;
        if(root==NULL){
            return vec1;
        }
        
        levelorder(root,vec1);
        
        return vec1;
        
    }
};