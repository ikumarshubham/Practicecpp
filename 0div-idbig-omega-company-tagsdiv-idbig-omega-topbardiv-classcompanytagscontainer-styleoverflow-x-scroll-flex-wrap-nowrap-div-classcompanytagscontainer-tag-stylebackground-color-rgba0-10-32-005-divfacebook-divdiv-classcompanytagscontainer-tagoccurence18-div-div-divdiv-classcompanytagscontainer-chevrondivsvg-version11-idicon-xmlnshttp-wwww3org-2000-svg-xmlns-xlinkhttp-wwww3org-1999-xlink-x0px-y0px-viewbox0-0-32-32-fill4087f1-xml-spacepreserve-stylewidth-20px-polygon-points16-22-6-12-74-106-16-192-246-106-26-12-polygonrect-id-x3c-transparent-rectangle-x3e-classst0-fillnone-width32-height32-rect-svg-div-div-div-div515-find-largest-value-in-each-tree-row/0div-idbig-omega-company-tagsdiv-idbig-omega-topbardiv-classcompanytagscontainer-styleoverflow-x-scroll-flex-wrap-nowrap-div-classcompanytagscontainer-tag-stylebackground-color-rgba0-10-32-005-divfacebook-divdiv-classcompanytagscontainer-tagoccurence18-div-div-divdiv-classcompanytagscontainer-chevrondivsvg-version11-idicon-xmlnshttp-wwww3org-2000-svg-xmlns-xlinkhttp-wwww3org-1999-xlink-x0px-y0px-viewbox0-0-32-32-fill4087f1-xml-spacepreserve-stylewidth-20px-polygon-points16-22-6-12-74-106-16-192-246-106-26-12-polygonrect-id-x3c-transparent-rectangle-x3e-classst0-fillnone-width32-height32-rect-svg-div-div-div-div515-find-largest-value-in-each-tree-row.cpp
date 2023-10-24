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
    void levelorder(TreeNode* root,vector<int>&ans){
    vector<int>vec2;
    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);
    
    
    while(!q.empty()){
        TreeNode* f=q.front();
        
        if(f==NULL){
            sort(vec2.begin(),vec2.end());
            ans.push_back(vec2[vec2.size()-1]);
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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if(root==NULL){
            return ans;
            
        }
        
        levelorder(root,ans);
        return ans;
        
        
    }
};